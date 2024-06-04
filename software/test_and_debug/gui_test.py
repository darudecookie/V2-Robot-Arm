import tkinter as tk


def meow():
   print(cartesian_Entry.get())
    
main_GUI = tk.Tk()
main_GUI.geometry("600x400")

inp_cartesian_coords=tk.StringVar()

cartesian_Entry = tk.Entry(main_GUI)
cartesian_Entry.grid(row = 1, column=2)
cartesian_Button = tk.Button(main_GUI,command= meow, padx=15, text = "send")
cartesian_Button.grid(row = 1, column=3)
cartesian_Entry_label = tk.Label(text = "Target Cartesian coords (mm) 'X Y Z'")
cartesian_Entry_label.grid(row = 1, column= 1)


name = cartesian_Entry.get()
main_GUI.mainloop()

