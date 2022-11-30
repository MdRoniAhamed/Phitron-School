""" lst = [1,2,3,4,[5,6,[7,8,[11,12,[13,14]]]]]
print(lst[4][2][2][1])
lst.append(23)
lst.extend([45,56,23])
print(lst)
 """
# tp = (3,4,4,5,6)
# print(tp)
# print(tp.count(4)) 
# dct = {"roni":34343,"korim": 3432}
# print(dct.get("hum",False))
# child1 = {
#     'name':'Roni',
#     'year': 2004
# }
# child2 = {
#     'name':'emilia',
#     'year': 2004
# }
# child3 = {
#     'name':'tom',
#     'year': 1999
# }

# my_family = {
#     'child1' : child1,
#     'child2' : child2,
#     'child3' : child3,
# }

# # print(my_family['child1']['year'])
# print(my_family.get('child1',False).get('year',False))
""" a = dict([(1,'A'),(2,'B'),(3,'C'),(4,'D')])
print(a) 
a.pop(3)
print(a)
print(a.keys())
print(a.values()) """
""" 
s = "I Love Python"
# s[0] ='a'
print(s[::-1])
print(s[0]) """

s = "232 I Love YOU"[::-1]
print(s)
s = "34243"
print('I' in s)
print(s.isalnum())
print(s[0].isalpha())