""" def greet():
    print('Good Morning')
# greet()

# a = lambda arg : expression

a = lambda : print("Good Morning")
# a()
 """
""" 
a = 'I'
b = chr(ord(a)+5)
print(b)
 """

# Example - 1
""" 
s = "phitron"
new_string = lambda string : string.upper() [::-1]
print(new_string(s)) """

# Example -> 2
""" def mx(a, b): return a if (a > b) else b

print(mx('zz', 'ij'))
print(mx(mx(5, 6), mx(3, 4))) """


# Example -> 3:
""" 
list = [1,2,3,4,5,6,7]

new_list = [lambda arg = x: arg * 2 for x in list]
for i in new_list:
    print(i())
# print(new_list)
 """
""" lst = [1,2,3,4,5,6,7]
new_list = list(map(lambda x: x*2, lst))
print(new_list) """


# Example -> 4
# Filter, map, reduce

# Filter
""" my_list = [1, 2, 3, 4, 5, 6, 7, 8]
new_list = list(filter(lambda x: (x%2 == 0), my_list))

print(new_list)
 """

# Example -> 5
""" 
string_list = ["hello", "world", "python"]
new_list = list(map(lambda x: x.upper(), string_list))
print(new_list) """

# Example -> 6
from functools import reduce
from os import lstat
lst = [1,2,3,4,5,6,7, 8, 9, 10]
""" sum = 0
for i in lst:
    sum += i
print(sum) """
sum = reduce(lambda x,y: x+y, lst)
print(sum)