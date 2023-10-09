import tkinter
from tkinter import ttk
window = tkinter.Tk()


window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

selected = tkinter.StringVar()
r1 = ttk.Radiobutton(window, text =  'Si', value = '1', variable = selected )
r2 = ttk.Radiobutton(window, text =  'No', value = '2', variable = selected )
r3 = ttk.Radiobutton(window, text =  'Quizas', value = '3', variable = selected )

r1.grid(column = 0,row = 1, pady = 5, padx = 5)
r2.grid(column = 0,row = 2, pady = 5, padx = 5)
r3.grid(column = 0,row = 3, pady = 5, padx = 5)

# radio buttons 2 
selected2 = tkinter.StringVar()
rs1 = ttk.Radiobutton(window, text =  'Si', value = '1', variable = selected2 )
rs2 = ttk.Radiobutton(window, text =  'No', value = '2', variable = selected2 )
rs3 = ttk.Radiobutton(window, text =  'Quizas', value = '3', variable = selected2 )

rs1.grid(column = 1,row = 1, pady = 5, padx = 5)
rs2.grid(column = 1,row = 2, pady = 5, padx = 5)
rs3.grid(column = 1,row = 3, pady = 5, padx = 5)

loggin_button = ttk.Button(window, text = 'Restart')
loggin_button.grid(column = 4, row = 2, sticky = tkinter.S, padx = 5, pady = 5)

window.mainloop()

