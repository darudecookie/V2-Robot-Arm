import customtkinter as CTk



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


class GUI_Controller(CTk.CTk):
    def __init__(self):
        self.JointHold = False

        self.main_GUI = CTk.CTk()
        self.main_GUI.geometry("720x480")
        self.main_GUI.configure(fg_color="grey")

        self.cartesian_inp_Buttons = [CTk.CTkButton(self.main_GUI, command=self.parse_cartesian_pos, width=15, text="send"), CTk.CTkButton(self.main_GUI, command=self.parse_cartesian_rot, width=15, text="send"), ]
        self.cartesian_inp_Entries = []
        self.cartesian_inp_Labels = []
        self.cartesian_home_Buttons = [CTk.CTkButton(self.main_GUI, command=self.home_cartesian_pos, width=10, text="home"), CTk.CTkButton(self.main_GUI, command=self.home_cartesian_rot, width=10, text="home"), ]

        cart_label_list = ("Position (mm); 'X Y Z'", "Rotation (deg); 'Roll Pitch Yaw'", )
        for i in range(2):
            self.cartesian_inp_Labels.append(CTk.CTkLabel( self.main_GUI, text="Target Cartesian " + cart_label_list[i], fg_color="grey"))
            #self.cartesian_inp_Labels[i].pack(row=i, column=1, padx=15, sticky=CTk.W)

            self.cartesian_inp_Entries.append(CTk.CTkEntry(self.main_GUI, fg_color="grey"))
            #self.cartesian_inp_Entries[i].grid(row=i, column=2)
            
            self.cartesian_inp_Buttons[i].configure(fg_color="dark grey")
           # self.cartesian_inp_Buttons[i].grid(row=i, column=3,padx= 5,sticky=CTk.W)

            self.cartesian_home_Buttons[i].configure(fg_color="dark grey")
            #self.cartesian_home_Buttons[i].grid(row=i, column=4,padx= 5,sticky=CTk.W)            

        self.Estop_Jointhold_GUI =CTk.CTk()
        self.Estop_Jointhold_GUI.geometry("150x197")
        self.Estop_Jointhold_GUI.configure(fg_color="black")
        self.Estop_Jointhold_GUI.resizable(0, 0)
        
        self.JointHold_button = CTk.CTkButton(self.Estop_Jointhold_GUI, text="JOINT HOLD", command=self.JointHold_callback, height=30, width=9,  fg_color="#FF6700",  )#font=tk_font.Font(size=20))
        self.JointHold_button.grid(row=1)

        self.Estop_button = CTk.CTkButton(self.Estop_Jointhold_GUI, text="E-STOP", command=self.E_stop_callback, height=30, width=30, fg_color="#FF0000", )#font=tk_font.Font(size=20))
        self.Estop_button.grid(row=2)

        self.Estop_Jointhold_GUI_loop()

    def Estop_Jointhold_GUI_loop(self):
        self.Estop_Jointhold_GUI.after(100, self.Estop_Jointhold_GUI_loop)

        if 'normal' != self.Estop_Jointhold_GUI.state():
            self.E_stop_callback()
        else:
            self.Estop_Jointhold_GUI.lift()
        
    def parse_cartesian_pos(self):
        print(parse_n_floats(2, self.cartesian_Entries[0].cget()), "pos")
    
    def parse_cartesian_rot(self):
        print(parse_n_floats(2, self.cartesian_Entries[1].cget()), "rot")
    
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
meow.mainloop()