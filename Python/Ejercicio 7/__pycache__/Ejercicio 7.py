import datetime
from datetime import datetime

print("La hora de salida es a las 7 pm ")

Now = datetime.now()
Hours = datetime.now().hour
Minutes = datetime.now().minute
Seconds = datetime.now().second
Missing_time = 0
Exit_time = [19,00]
print(f"{Exit_time[0]} {Exit_time[1]}")


while True:
     
    print(f"La hora es  {Hours}  con {Minutes} minutos y  { Seconds} segundos")

    if Hours >= Exit_time[0]:
        print(f"Son las {Hours}:{Minutes} es hora de salir del trabajo ")
                
    else:
       Missing_time = Hours - Exit_time[0]
       print(f"Aun faltan {Missing_time} horas es {Now} y se sale a las {Exit_time} pm ") 

    break



