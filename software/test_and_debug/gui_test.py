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
        self.main_GUI.configure(background="grey")

        spacing_label = tk.Label(self.main_GUI, background="grey")
        spacing_label.grid(row=0, column=0)

        self.cartesian_Buttons = [tk.Button(self.main_GUI, command=self.parse_cartesian_pos, padx=15, text="send"), tk.Button(
            self.main_GUI, command=self.parse_cartesian_rot, padx=15, text="send"), ]
        self.cartesian_Entries = []
        self.cartesian_Labels = []

        cart_lable_list = ("Position (mm); 'X Y Z'",
                           "Rotation (deg); 'Roll Pitch Yaw'", )
        for i in range(2):
            self.cartesian_Labels.append(
                tk.Label(text="Target Cartesian " + cart_lable_list[i], background="grey"))
            self.cartesian_Labels[i].grid(
                row=i+1, column=1, padx=15, sticky=tk.W)

            self.cartesian_Entries.append(
                tk.Entry(self.main_GUI, background="grey"))
            self.cartesian_Entries[i].grid(row=i+1, column=2)
            self.cartesian_Buttons[i].configure(background="dark grey")
            self.cartesian_Buttons[i].grid(row=i+1, column=3)

        # self.cartesian_jog_Buttons = [tk.Button(self.main_GUI, pady=5, padx=5, text="^"),tk.Button(self.main_GUI, pady=5,padx=5, text="<"),tk.Button(self.main_GUI, pady=5,padx=5, text=">"),tk.Button(self.main_GUI, pady=5, padx=5, text="V"),]

        # self.cartesian_jog_Buttons[0].grid(row=4, column=1)
        # self.cartesian_jog_Buttons[1].grid(row=5, column=0)
        # self.cartesian_jog_Buttons[2].grid(row=5, column=2)
        # self.cartesian_jog_Buttons[3].grid(row=6, column=1)

        self.JointHold_button = tk.Button(self.main_GUI, text="JOINT HOLD", command=self.JointHold_callback,
                                          pady=15, padx=20,  background="orange",  font=tk_font.Font(size=15))
        self.JointHold_button.grid(row=1, column=4, pady=0, padx=50)

        self.Estop_button = tk.Button(self.main_GUI, text="E-STOP", command=self.E_stop_callback,
                                      pady=15, padx=40, background="red", font=tk_font.Font(size=15))
        self.Estop_button.grid(row=3, column=4, pady=0, padx=50)

        self.main_GUI.mainloop()

    def parse_cartesian_pos(self):
        print(parse_n_floats(2, self.cartesian_Entries[0].get()), "pos")

    def parse_cartesian_rot(self):
        print(parse_n_floats(2, self.cartesian_Entries[1].get()), "rot")

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
