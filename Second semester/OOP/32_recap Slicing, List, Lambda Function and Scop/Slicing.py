# Sequential Data Type Slicing (String, list, tuple)
lst = [1,2,3,4,5,6,7,8,9,10]
# print(lst[-4::1]) # Start : end = end - start = total element show .
# print(lst[0:10:2])  # start : end: step

""" a = [1,2,3,4,5]
a = tuple(a)
print(a)
print(a[::-1])

 """

# slice(start, end, step)
new_lst = slice(3)   # Formal way te slice kora 
print(lst[new_lst])