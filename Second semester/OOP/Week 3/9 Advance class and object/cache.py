import time
from functools import cache

@cache
def fib(n):
    if n <=1:
        return 1
    return fib(n-1) + fib(n-2) 

start = time.time()
for i in range(9000):
    print(i,fib(i))

end = time.time()
mili_seconds = (end-start) * 1000
print('Time took ' , mili_seconds)

# Without cache
# Time took  9770.860433578491