# List and dictionary Comprehension

# List comprehensions
# [expression for item in range()]

#example ->1
""" lst = ["hello", "world", "python"]

new_list = [x.upper() for x in lst]
print(new_list) """

# example - 2
""" x = [i for i in range(1,10)]
y = list(range(1,10))
print(x)
print(y) """

# example -> 3
""" x = "hello"
y = [i for i in x]
print(y)
# print(list(x)) """

# example ->4
""" lst = [x for x in range(1, 20) if x% 2 ==0]
print(lst) """

#example -> 5
""" lst = [x for x in range(100) if x%3 == 0 if x%5==0]
print(lst) """

# Example -> 6
# lst = ["Even" if x%2 ==0 else "odd" for x in range(100)]
# print(lst)

# Example ->7

lst = [(x,y) for x in [1,2,3,4,5] for y in [1,2,3,4,5] if x!=y ]
print(lst)
