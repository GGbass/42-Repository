import tkinter

window = tkinter.Tk()

label1 = tkinter.Label(window, text = 'label 1', bg = 'yellow', fg = 'white')
label1.pack(ipadx = 50, ipady = 50, fill = 'x')

# fill expande el label bien sea x, y or both

label2 = tkinter.Label(window, text = '******* !', bg = 'blue', fg = 'white')
label2.pack(ipadx = 50, ipady = 50, fill = 'x')

# expand  usa booleans True or False

label_3 = tkinter.Label(window, text = 'label 3 !', bg = 'red', fg = 'Blue')
label_3.pack(ipadx = 50, ipady = 50, fill = 'x')

label4 = tkinter.Label(window, text = 'label 4', bg = 'red', fg = 'Red')
label4.pack(ipadx = 50, ipady = 50, side = 'left')
# para colocar a un lugar en especifico usar el side 
label5 = tkinter.Label(window, text = 'label 5 !', bg = 'yellow', fg = 'Blue')
label5.pack(ipadx = 50, ipady = 50, side = 'left')

label_2 = tkinter.Label(window, text = 'label 6', bg = 'red', fg = 'Red')
label_2.pack(ipadx = 50, ipady = 50, side = 'left')

window.mainloop()
