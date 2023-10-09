class Alumno():
    def __init__(self,Nombre,Notas):
            self.Nombre = Nombre
            self.Notas = Notas
    def alumno(self):
            print('El alumno ' + self.Nombre + ' Tiene unas notas de ' + self.Notas)
            print(' Donde las notas mayor a 10/20 aprueban ')
    def prueba(self):
            if int(self.Notas) >= 0 and  int(self.Notas) <= 20:
                   if int(self.Notas) >= 10:
                          print("El alumno" + self.Nombre + " Aprueba con " + self.Notas)
                   else:
                          print("El alumno" + self.Nombre + " No Aprueba con " + self.Notas)      
            else:
                   print("Error !  la nota " + self.Notas + " No esta en el rango")


A1 = Alumno("Marcos", "16")
A1.alumno()
A1.prueba()

A2 = Alumno("Ivan", "9")
A2.alumno()
A2.prueba()

A3 = Alumno("Gonzo", "35")
A3.alumno()
A3.prueba()