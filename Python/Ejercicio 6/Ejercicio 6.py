class Vehiculo():
    def __init__(self,Color, Ruedas, Puertas):
            self.Color = Color
            self.Ruedas = Ruedas
            self.Puertas = Puertas
    def atributos(self):
        print('Este Vehiculo es de color ' +(self.Color) + ' y tiene '
         + (self.Ruedas) + ' Ruedas  y ' 
         + (self.Puertas)   + ' Puertas')

v = Vehiculo(" Rojo", " 4" , " 4")
v.atributos()

class Coche(Vehiculo):
    def __init__(self, Velocidad, Cilindrada):
        super().__init__("Verde", "2", "2")
    
        self.Velocidad = Velocidad
        self.Cilindrada = Cilindrada
    def enciende(self):
        print("El Motor esta encendido")
        print(self.Velocidad,self.Cilindrada,self.Color,self.Ruedas,self.Puertas)
       
c = Coche("160", "650")

c.enciende()
c.atributos()







    
