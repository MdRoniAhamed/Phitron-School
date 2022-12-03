# Multithreading in python
from threading import Thread
from time import sleep, perf_counter 
start_time = perf_counter()
def task_1():
    for i in range(1,5):
        print(f"Starting task ->{i}\n")
        sleep(1)

def task_2():
    for i in range(6,10):
        print(f"Starting new task ->{i}\n")
        sleep(1)

t1 = Thread(target=task_1)
t2 = Thread(target=task_2)
t1.start()
t2.start()
t1.join()
t2.join()
end_time = perf_counter()
print(end_time - start_time)