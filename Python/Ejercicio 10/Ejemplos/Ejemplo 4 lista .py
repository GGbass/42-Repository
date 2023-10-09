import tkinter
from tkinter import ttk
window = tkinter.Tk()

# (0,0) (1,0) (2,0)
# (0,1) (1,1) (2,1)

window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

lista =['windows', 'ios', 'android','linux','mc2']
lista_items = tkinter.StringVar(value = lista)
listbox = tkinter.Listbox(window, height = 50 , listvariable = lista_items)
listbox.grid(column = 0, row = 0, sticky = tkinter.N)



window.mainloop()
#sys.exit(0)


