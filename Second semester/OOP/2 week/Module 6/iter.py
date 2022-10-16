numbers  = [23,45,34,98,56,67]
iterator_list = iter(numbers)
try:
    print(next(iterator_list))
    print(next(iterator_list))
    print(next(iterator_list))
    print('I am exploring Iterator')
    print('I am confused about it')
    print(next(iterator_list))
    print(next(iterator_list))
    print('Doing something else now')
    print(next(iterator_list))
    print(next(iterator_list))

except StopIteration:
    print('Iteration is Stoped')
