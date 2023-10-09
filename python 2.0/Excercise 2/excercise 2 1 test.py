agenda = {}

def agregar_persona():
    nombre = input("Ingrese el nombre de la persona: ")
    telefono = input("Ingrese el número de teléfono: ")
    agenda[nombre] = telefono
    print("\n", nombre, "ha sido agregado a la agenda")

def buscar_telefono():
    nombre = input("Ingrese el nombre de la persona: ")
    if nombre in agenda:
        print("El número de teléfono de", nombre, "es:", agenda[nombre], "\n")
    else:
        print(nombre, "no se encuentra en la agenda")


def menu():
    print("AGENDA TELEFÓNICA")
    print("1. Añadir persona")
    print("2. Buscar teléfono")
    print("3. Salir")

while True:
    menu()
    opcion = input("Seleccione una opción: ")
    if opcion == "1":
        agregar_persona()
    elif opcion == "2":
        buscar_telefono()
    elif opcion == "3":
        break
    else:
        print("Opción inválida")
