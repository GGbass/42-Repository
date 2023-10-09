import pickle


class vehiculo():
    nombre = ""
    color = 0.0

    def __init__(self,nombre,color):
        self.nombre = nombre
        self.color = color
    
    def atributos(self):
        
        return self.nombre,self.color    
   
f = open('datos.bin', 'rb')
moto = pickle.load(f)
f.close()

print(type(moto))
print(moto.atributos(),"color", moto.color)

