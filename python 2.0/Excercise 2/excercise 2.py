print("<<Bienvenido a la agenda de Gonzalo>>")
Agenda = {}

def add():
    name = input("Type the name of the contact: ").capitalize()
    number = input("Type the number of the contact: ")

    Agenda[name] = number
    print(f"\n {name} Has been added")

def find():
    print(Agenda)
    name = input("Ingrese el nombre de la persona a buscar el movil: ").capitalize()
    if name in Agenda:
        print(f"El numero de movil de {name} es {Agenda[name]} ")    
    else:
        print(f" El nombre {name} no esta en  la agenda : {Agenda}")

def erase():
    print(Agenda)
    name = input("Ingrese el nombre del contacto a borrar: ").capitalize()
    if name in Agenda:
        del(Agenda['name'])
        print(f"El contacto {name} fue borraro de la agenda")
    else:
        print(f"El nombre ingresado no se encuentra en la lista. ")           

def menu():
    print('Press')
    print("1.- To Add a contact")
    print("2.- to Find a contact")
    print("3.- Delete a contact")
    print("4.- Stop Running")



while True:
    menu()
    option = int(input("Select an option : "))
    if option == 1:
        add()
    elif option == 2:
        find()
    elif option == 3:
        erase()    
    elif  option == 4:
        break
    else:
        print('Invalid option !!! ')
            


