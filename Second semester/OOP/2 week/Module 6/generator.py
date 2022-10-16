from unittest import result


numbers  = [23,45,34,98,56,67]

def get_number(nums):
    for num in nums:
        yield num

result = get_number(numbers)
print(next(result))
print(next(result))
print(next(result))
print('I am exploring generator')
print('I have no idea what is a generator')
print(next(result))
print(next(result))