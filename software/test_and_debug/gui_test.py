import tkinter as tk
import tkinter.font as tk_font


def parse_n_floats(n, input_string, delim_char=" "):
    if input_string == "":
        return False

    num_delim = 0
    for char in input_string:
        if char == delim_char:
            num_delim += 1
    if num_delim != n or input_string[0] == delim_char or input_string[-1] == delim_char:
        return False

    string_floats = ["", "", ""]
    floats = [0, 0, 0]
    float_index = 0

    for num in input_string:
        if num == delim_char:
            floats[float_index] = float(string_floats[float_index])
            float_index += 1
        else:
            try:
                if num != ".":
                    int(num)
                string_floats[float_index] += num
            except ValueError:
                return False

    floats[float_index] = float(string_floats[float_index])
    return floats


class GUI_Controller:
    def __init__(self):
        self.JointHold = False

        self.main_GUI = tk.Tk()
        self.main_GUI.geometry("720x480")
        self.main_GUI.configure(background="#FFFFFF")

        spacing_label = tk.Label(self.main_GUI, text=" ", background="#404040")
        spacing_label.grid(row=0, column=0)

        self.cartesian_inp_Buttons = [tk.Button(self.main_GUI, command=self.parse_cartesian_pos, padx=15, text="send"), tk.Button(self.main_GUI, command=self.parse_cartesian_rot, padx=15, text="send"), ]
        self.cartesian_inp_Entries = []
        self.cartesian_inp_Labels = []
        self.cartesian_home_Buttons = [tk.Button(self.main_GUI, command=self.home_cartesian_pos, padx=10, text="home"), tk.Button(self.main_GUI, command=self.home_cartesian_rot, padx=10, text="home"), ]

        cart_label_list = ("Position (mm); 'X Y Z'", "Rotation (deg); 'Roll Pitch Yaw'", )
        for i in range(2):
            self.cartesian_inp_Labels.append(tk.Label(text="Target Cartesian " + cart_label_list[i], background="#FFFFFF"))
            self.cartesian_inp_Labels[i].grid(row=i+1, column=1, padx=15, sticky=tk.W)

            self.cartesian_inp_Entries.append(tk.Entry(self.main_GUI, background="#dae8fc", borderwidth=1, relief="solid"))
            self.cartesian_inp_Entries[i].grid(row=i+1, column=2, padx=5)
            
            self.cartesian_inp_Buttons[i].configure(background="#ffe6cc", borderwidth=2, relief="solid")
            self.cartesian_inp_Buttons[i].grid(row=i+1, column=3, sticky=tk.E)

            self.cartesian_home_Buttons[i].configure(background="#ffe6cc", borderwidth=2, relief="solid")
            self.cartesian_home_Buttons[i].grid(row=i+1, column=4,)            


        self.cartesian_jog_GUI = tk.Tk()

        self.Estop_jointhold_GUI = tk.Tk()
        self.Estop_jointhold_GUI.resizable(False, False)
        self.Estop_jointhold_GUI.configure(background="black")
        self.Estop_jointhold_GUI.resizable(0, 0)
        self.Estop_jointhold_GUI.protocol('WM_DELETE_WINDOW', lambda: print("cannot close this window"))
        
        self.JointHold_button = tk.Button(self.Estop_jointhold_GUI, text="JOINT HOLD", command=self.JointHold_callback, pady=30, padx=9,  background="orange",  font=tk_font.Font(size=20))
        self.JointHold_button.grid(row=1)

        self.Estop_button = tk.Button(self.Estop_jointhold_GUI, text="E-STOP", command=self.E_stop_callback, pady=30, padx=30, background="red", font=tk_font.Font(size=20))
        self.Estop_button.grid(row=2)

        self.window_manager_loop()

    def window_manager_loop(self):
        self.Estop_jointhold_GUI.after(100, self.window_manager_loop)

        if 'normal' != self.Estop_jointhold_GUI.state():
            self.E_stop_callback()
        else:
            self.cartesian_jog_GUI.lift()

            self.Estop_jointhold_GUI.lift()
        
    def parse_cartesian_pos(self):
        print(parse_n_floats(2, self.cartesian_inp_Entries[0].get()), "pos")
    
    def parse_cartesian_rot(self):
        print(parse_n_floats(2, self.cartesian_inp_Entries[1].get()), "rot")
    
    def home_cartesian_pos(self):
        print("cart pos home")
    
    def home_cartesian_rot(self):
        print("cart rot home")    

    def JointHold_callback(self):
        if self.JointHold:
            self.JointHold = False
            print("joint hold off")
        else:
            self.JointHold = True
            print("joint hold on")

    def E_stop_callback(self):
        print("Estop hit")


meow = GUI_Controller()
meow.main_GUI.mainloop()