def main():
    Paises = set()
    paises = list(set(input("lista de paises ").split(","))) 
    Paises.add(str(paises))
    return f"""
    Lista de paises ingresados {paises} 
    paises desde el set {Paises} """
        


a1 = main()
print(a1)


if __name__ == ' main ':
        main()