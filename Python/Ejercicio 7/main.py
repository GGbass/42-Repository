import calculadora as ca

a = 3
b = 2
print(f"Los siguientes resultados seran mostrados base a {a} como primer digito y {b} como el segundo")
def main():
    suma = ca._suma(3,2)
    resta = ca._resta(3,2)
    multi = ca._multiplicar(3,2)
    divi = ca._dividir(3,2)
    print(f"El resultado de  {suma}  es la suma de {a} +  {b}")
    print(f"El resultado de  {resta}  es la resta de {a} +  {b}")
    print(f"El resultado de  {multi}  es la multiplicacion de {a} +  {b}")
    print(f"El resultado de  {divi}  es la division de {a} +  {b}")

m = main()
print(m)    

if __name__ == '  main  ':

    main()


    