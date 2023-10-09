import _thread
import time
def main(threat_name, awaiting_time):
        count = 0
        while count < 5:
                
            time.sleep(awaiting_time)
            count += 1
            print(f" hilo {threat_name} - {time.ctime(time.time())}")





_thread.start_new_thread(main, ("Hilo 1" , 1))
_thread.start_new_thread(main, ("Hilo 2" , 2))

print("He disparado los hilos")
while True:
        time.sleep(0.1)
if __name__ == ' main ':
        main()