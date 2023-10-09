print("<<Bienvenido a la agenda de Gonzalo>>")

agenda = {
    'Gonzalo' :{ 'movil': '666461855'},
    'Milica':{'movil': '666461856'},   
}
while True:
    print(f"{agenda} Son los contatos actuales")
    valor = int(input(f"Esta es el actual diccionario {agenda} :\
          1.- para agregar nuevo contacto\
          2.- para modificar un contacto\
          3.- para salir : "))
    if valor == 1:
        print("ingrese los datos del siguiente contacto ")
        nombre = input("Ingresa el nombre del contacto por agregar : ")
        numero = int(input("Ingresa el numero del contacto : "))
        agenda[nombre] = {'movil' : numero}
        print(f'Datos de , {nombre} , Se ha agregado : ')
        print('numero de movil:', agenda[nombre]['movil'])

    elif valor == 2:
            
    else:

            break


    

    