import tkinter
from tkinter import Label, ttk


window = tkinter.Tk()

window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

lista =['Yamaha', 'Suzuki', 'Royal Enfield','Kawasaki']
lista_items = tkinter.StringVar(value = lista)
listbox = tkinter.Listbox(window , height = 5, listvariable = lista_items)
listbox.grid(column = 0, row = 0, sticky = tkinter.N)

label1 = Label(text = 'Marcas de motocicletas')
label1.grid(column = 0,row = 0, sticky = tkinter.S)


window.mainloop()