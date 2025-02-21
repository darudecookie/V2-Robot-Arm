import inputs 
import math
import time

import rclpy
from rclpy.node import Node
from v2_robot_arm_interfaces.msg import TargetCartesian, CurrentCartesian, SystemDiagnosticInfo, ControlStatus, PeripheralSpeed
from v2_robot_arm_interfaces.srv import SystemStatus


class Thrustmaster_TFlight_X:

    def __init__(self):

        self.joy_values = [0, 0, 0] 

        self.joint_hold = False
        self.cart_pos_outputting = False
        self.movehome = False

        while len(inputs.devices.gamepads) == 0:
            print("no gamepads found\nretrying in 1 second")
            time.sleep(1)   

    def parse_event_from_peripheral(self):  #takes info from peripheral and sets appropriate flags/vars ****BINDINGS ARE HERE******

        gamepad_events = inputs.get_gamepad()

        if gamepad_events:
            for gamepad_event in gamepad_events:
                match gamepad_event.ev_type: 
                    case "Key":  # button press
                        if gamepad_event.code == "BTN_Z" and gamepad_event.state == 1:  # trigger button is hit (toggle position/rotation)
                            self.cart_pos_outputting = not self.cart_pos_outputting

                        elif gamepad_event.code == "BTN_WEST" and gamepad_event.state == 1:  # thumb trigger/ wpn release is hit (jointhold)
                            self.joint_hold = not self.joint_hold

                        elif gamepad_event.code == "BTN_SELECT" and gamepad_event.state == 1:
                            self.movehome = True

                    case "Absolute":  # joystick
                        joy_val = (gamepad_event.state - 128) / 128  # normalizing joy val(0-255) to -1 to 1
                        match gamepad_event.code:
                            # NOTE: I switched the x and y values on the joystick and on the robot
                            case "ABS_Y":
                                self.joy_values[0] = joy_val
                            case "ABS_X":
                                self.joy_values[1] = joy_val
                            case "ABS_Z":
                                self.joy_values[2] = joy_val


class Peripheral_Controller(Node):

    def __init__(self):
        super().__init__("Peripheral_Controller_Node")
        self.get_logger().info("initiating node")

        self.declare_parameter("safe_startup", True)
        safe_startup = self.get_parameter("safe_startup")

        self.System_Status_Req = SystemStatus.Request()        
        self.System_Status_Req.jointhold = -1
        
        self.joy_values = [0, 0, 0]
        self.should_output = False
        self.position_output = True    
        
        self.translation_speed = 10
        self.rotation_speed = math.degrees(10)
        
        self.current_cartesian_pos = [0, 0, 0]
        self.current_cartesian_rot = [0, 0, 0]

        if safe_startup.value: 
            while len(inputs.devices.gamepads) == 0:
                self.get_logger().warn("no gamepads found\nretrying in 0.5 seconds")
                time.sleep(.5)
            
        self.get_logger().info("gamepad found!\nproceeding with initiation")

        self.System_Status_client = self.create_client(SystemStatus, "system_status")
        if safe_startup.value: 
            while not self.System_Status_client.wait_for_service(timeout_sec=1):
                self.get_logger().warn("'system_status' service not available\nretrying in 1 second")
        self.get_logger().info("'system_status' service found\nproceeding with initiation!")
        
        self.System_Diagnostic_sub = self.create_subscription(SystemDiagnosticInfo, "system_diagnostic_information", self.update_jointhold_from_system, 10)
        self.Control_Status_sub = self.create_subscription(ControlStatus, "control_status", self.update_output_from_system, 10)
        self.Current_Cartesian_sub = self.create_subscription(CurrentCartesian, "current_cartesian", self.update_current_cartesian_from_system, 10)
        self.Peripheral_Speed_sub = self.create_subscription(PeripheralSpeed, "peripheral_speed", self.update_speeds_from_system, 10) 

        self.Target_Cartesian_pub = self.create_publisher(TargetCartesian, "target_cartesian", 10)
        
        peripheral_event_frequency = 250
        self.peripheral_event_timer = self.create_timer(1 / peripheral_event_frequency, self.parse_event_from_peripheral)

        self.cartesian_update_frequency = 50
        self.cartesian_update_timer = self.create_timer(1 / self.cartesian_update_frequency, self.update_cartesian_from_peripheral,)

        self.get_logger().info(f"node initiated!\nperipheral name: '{inputs.GamePad}'")

    def update_jointhold_from_system(self, msg):
        if msg.jointhold != 0:
            self.System_Status_Req.jointhold = msg.jointhold            
        self.get_logger().info(f"receiving updated jointhold information\njointhold status: {self.System_Status_Req.jointhold}")

    def update_output_from_system(self, msg):
        if msg.peripheral_interface == 1:
            self.should_output = True
        else:
            self.should_output = False
            
    def update_current_cartesian_from_system(self, msg):
        self.current_cartesian_pos = msg.position
        self.current_cartesian_rot = msg.rotation
        
        self.get_logger().debug("receiving updated current cartesian coords")

    def update_speeds_from_system(self, msg):
        self.translation_speed = msg.translation_speed 
        self.rotation_speed = msg.rotation_speed

        self.get_logger().debug(f"updating peripheral translation and rotation speeds to {self.translation_speed}, {self.rotation_speed}")

    def parse_event_from_peripheral(self):  #takes info from peripheral and sets appropriate flags/vars ****BINDINGS ARE HERE******
        try:
        
            gamepad_events = inputs.get_gamepad()

            if gamepad_events:
                for gamepad_event in gamepad_events:
                    # print(gamepad_event.ev_type,"-",gamepad_event.code)
                    match gamepad_event.ev_type:
                        
                        case "Key":  # button press
                            if gamepad_event.code == "BTN_TRIGGER" and gamepad_event.state == 1:  # trigger button is hit (toggle position/rotation)
                                self.position_output = not self.position_output
                                
                                self.get_logger().info("toggling position/rotation control")
                            elif gamepad_event.code == "BTN_THUMB" and gamepad_event.state == 1:  # thumb trigger/ wpn release is hit (jointhold)
                                self.System_Status_Req.jointhold = -(self.System_Status_Req.jointhold)
                                self.System_Status_client.call_async(self.System_Status_Req)

                                self.get_logger().warn("toggling jointhold")

                            elif gamepad_event.code == "BTN_TOP" and gamepad_event.state == 1:
                                self.System_Status_Req.move_home = 1
                                self.System_Status_client.call_async(self.System_Status_Req)
                                self.System_Status_Req.move_home = 0

                                self.get_logger().info("commanding move home")

                        case "Absolute":  # joystick
                            joy_val = (gamepad_event.state - 128) / 128  # normalizing joy val(0-255) to -1 to 1
                            match gamepad_event.code:
                                # NOTE: I switched the x and y values on the joystick and on the robot
                                case "ABS_Y":
                                    self.joy_values[0] = joy_val
                                case "ABS_X":
                                    self.joy_values[1] = joy_val
                                case "ABS_RZ":
                                    self.joy_values[2] = joy_val
                self.get_logger().debug("parsing new peripheral event(s)")
        except inputs.UnpluggedError:  # this is here to hopefully gracefully pause the robot instead of some weird error or a crash if the joysticks unplugged
            if self.System_Status_Req.jointhold != 1:
                self.get_logger().fatal("peripheral not detected - triggering joint hold")
                self.System_Status_Req.jointhold = 1
                self.System_Status_client.call_async(self.System_Status_Req)

    def update_cartesian_from_peripheral(self):
        if self.should_output and self.System_Status_Req.jointhold == 0 and self.System_Status_Req.move_home == 0:
            msg = TargetCartesian()
            
            if self.position_output:
                msg.rotation = self.current_cartesian_rot
                
                delta_num = self.translation_speed * (1 / self.cartesian_update_frequency)

                for i in range(3):
                    msg.rotation[i] = self.current_cartesian_pos[i] + delta_num * self.joy_values[i]
                msg.rotation_speed = self.rotation_speed

            else:
                msg.position = self.current_cartesian_rot
                
                delta_num = self.rotation_speed * (1 / self.cartesian_update_frequency)
                for i in range(3):
                    msg.rotation[i] = self.current_cartesian_rot[i] + delta_num * self.joy_values[i]
                msg.translation_speed = self.translation_speed
                    
            self.Target_Cartesian_pub.publish(msg)
            print("pub ifykyk")
            self.get_logger().debug("peripheral controller: publishing updated cartesian coords")


def main(args=None):
    rclpy.init(args=args)
    Joystick_Controller_Object = Peripheral_Controller()

    rclpy.spin(Joystick_Controller_Object)


if __name__ == '__main__':
    main()

# joy
    # left right roll: ABS_X, 0 at left, 255 at right
    # forward b ack pitch: ABS_Y, 0 at forward, 255 at back
    # left right yaw, turning, ABS_Z, 0 at left, 255 at right

# buttons
    # trigger: BTN_Z, 0/1
    # wpn release/thumb trigger: BTN_WEST, 0/1

