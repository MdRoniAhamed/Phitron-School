
terms = int(input())

number1 , number2 = 0,1
count = 0
while count<= terms:
    print(f"{number1} " "",end='')
    number3 = number1+number2
    number1 = number2
    number2 = number3
    count+=1
