import tkinter
from tkinter import Label, ttk



def selecting():
    refresh.config(text="{}".format(selected.get()))

def reset():
    selected.set(None)
    refresh.config(text = "")

window = tkinter.Tk()
refresh = Label(window)
selected = tkinter.StringVar()
selected.set(None)    
    
window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)


r1 = ttk.Radiobutton(window, text =  'Si', value = '1', variable = selected )
r2 = ttk.Radiobutton(window, text =  'No', value = '2', variable = selected )
r3 = ttk.Radiobutton(window, text =  'Quizas', value = '3', variable = selected )

r1.grid(column = 0,row = 1, pady = 5, padx = 5)
r2.grid(column = 0,row = 2, pady = 5, padx = 5)
r3.grid(column = 0,row = 3, pady = 5, padx = 5)



loggin_button = ttk.Button(window, text = 'Restart', command = reset)
loggin_button.grid(column = 4, row = 2, sticky = tkinter.S, padx = 5, pady = 5)


window.mainloop()