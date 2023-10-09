items = {}
totals = 0
loop = True

while loop == True:
    Item = input("Introduzca el objeto a comprar : ").capitalize()
    many = int(input("Cuantos  "  + Item + " deseas : ? "))
    prize = float(input("Cuanto vale ? " + Item + (" ") ))
    keep = input("Presione X para seguir calculando , otro para finalizar compra ").capitalize()
    items[Item] = [Item, many, prize, many * prize]
    
    if keep != "X":
        print(" Productos :" , list(items.keys()))
        for i in items.keys():
            totals += items[i][3] 
        print("Precio total : " , totals)
        loop = False
        break
    else:
        loop = True
        
    

    



