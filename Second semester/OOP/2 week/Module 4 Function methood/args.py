from unittest import result


def add(num1,num2):
    total = num1 + num2
    print(f'num1: {num1} and num2: {num2}')
    return total

# result = add(12, 14)
# result = add(num2=12,num1=14)

def multifly(num1,num2 =1 ): #defoult value
    result = num1*num2
    return result
output = multifly(45)
# print(output)

def multifly2(*numbers ): # args / tapol
    result = 1    
    for num in numbers:
        result *= num
    return result
final_result = multifly2(12,2,3,5)
print(final_result)

def add1(num1,num2,*numbers) :
    print(num1,num2)
    print(numbers)

add1(3,4,5,6,7)