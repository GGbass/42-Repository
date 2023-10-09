import tkinter
from tkinter import ttk
window = tkinter.Tk()


window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

selected = tkinter.StringVar()
checkbox = ttk.Checkbutton(window, text = 'Acepto las condiciones ',  variable = selected)
checkbox.grid(column = 0,row = 1, pady = 5, padx = 5)

# para agregar un evento despues del click, despues de variable = selected
#  agregegar command = (seguido de la funcion)
window.mainloop()
