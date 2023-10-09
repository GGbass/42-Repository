kg = float((input("Cuando es tu peso en kilos ? ")))
estatura = float(input("cuanto es tu estatura ?" ))
estatura2 = estatura**2
imc = round((float(kg)/(estatura2)),2)

print("Tu indice de masa corporal es de :" + str(imc) )