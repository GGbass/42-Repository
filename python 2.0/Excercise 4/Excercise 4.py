from tkinter import *
import requests 
#8e73a17876b614a6bc692668a540b662
#https://api.openweathermap.org/data/2.5/weather?lat={lat}&lon={lon}&appid={API key}

def showing(clima):
    name_city = clima["name"]
    description = clima["weather"][0]["description"]
    temperature = clima["main"]["temp"]

    shows_city["text"] = name_city
    shows_temperature["text"] = temperature
    shows_description["text"] = description    


def weather(city):
    API_key = "8e73a17876b614a6bc692668a540b662"
    URL = "https://api.openweathermap.org/data/2.5/weather"
    parameters = { "APPID": API_key, "q": city, "units" : "metric"}
    response = requests.get(URL, params = parameters)
    clima = response.json()
    
    showing(clima)
    print(clima)
    print(clima["name"])
    print(clima["main"]["temp"] ,"Current")
    print(clima["main"]["temp_min"] , "Min")
    print(clima["main"]["temp_max"] , "Max")
    print(clima["weather"][0]["description"])


window = Tk()
window.geometry("350x550")


text_city = Entry(window, font=("Courier", 20,"normal"), justify = "center")
text_city.pack(padx=30 , pady=30)

get_weather = Button(window, text="Get the weather",font=("Courier", 15,"normal"), command = lambda: weather(text_city.get()))
get_weather.pack()


shows_city = Label(window, text="", font= ("Courier", 15,"normal"))
shows_city.pack( padx=30,pady=30)

shows_temperature = Label(window, text="", font= ("Courier", 30,"normal"))
shows_temperature.pack( padx=30,pady=30)

shows_description = Label(window, text="", font= ("Courier", 15,"normal"))
shows_description.pack( padx=30,pady=30)

window.mainloop()