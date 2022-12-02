#Example ->1
""" lst = [[0 for j in range(4)] for i in range(3)]
lst[2][3] = 19
print(id(lst[0]))
print(id(lst[1]))
print(lst) """

#Example -> 2
""" r,c=(5,5)
lst = [[1]*c]*r
lst[3][3] = 30
print(id(lst[0]))
print(id(lst[1])) """

#Example -> 3
""" lst = [[1,2,3],[4,5,6],[7,8,9]]
new_lst = [val for sublist in lst for val in sublist ]
# print(new_lst) """

""" lst = [['hello','world'],['mango','banana'],['python','java']]
new_lst = [string for substring in lst for string in substring if len(string)>1]
# print(new_lst) """

""" dic = {key+1:val for key in range(len(lst)) for val in lst }
print(dic) """