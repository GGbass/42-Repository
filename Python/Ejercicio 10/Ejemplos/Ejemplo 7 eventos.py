import tkinter
from tkinter import ttk
window = tkinter.Tk()


window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

loggin_button = ttk.Button(window, text = 'Restart')
loggin_button.grid(column = 4, row = 2, sticky = tkinter.S, padx = 5, pady = 5)


window.mainloop()
