import tkinter
from tkinter import ttk
window = tkinter.Tk()

# (0,0) (1,0) (2,0)
# (0,1) (1,1) (2,1)

window.columnconfigure(0,weight = 1)
window.columnconfigure(1, weight = 3)

#column y row posicionan el label en la matriz
# sticky mas la cordenada para fijar el label
# pad x margen horizontal y pad y margen vertical

#txt username
username_label = ttk.Label(window, text = 'Username')
username_label.grid(column = 0, row = 0, sticky = tkinter.W, padx = 5, pady = 5)

#entry username
username_entry = ttk.Entry(window)
username_entry.grid(column = 1, row = 0, sticky =tkinter.E,padx = 5, pady = 5)
# txt password
password_label = ttk.Label(window, text = 'Password')
password_label.grid(column = 0, row = 1, sticky = tkinter.W, padx = 5, pady = 5)

#entry password
password_entry = ttk.Entry(window, show = '*')
password_entry.grid(column = 1, row = 1, sticky =tkinter.E,padx = 5, pady = 5)

#button
loggin_button = ttk.Button(window, text = 'Button')
loggin_button.grid(column = 1, row = 3, sticky = tkinter.E, padx = 5, pady = 5)

window.mainloop()