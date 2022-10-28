def exp(a, n):
    return pow(a, n)


a, b = input('>> enter numbers: ').split()
a = int(a)
b = int(b)
result = exp(a, b)
print(f">> result is: {result}")
