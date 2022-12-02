# ZIP

#Example ->1
""" nums = [1, 2, 3]
string = ['one', 'two', 'three']
num = [1.1, 2.2, 3.3]
new_obj = zip(nums, string)
print(new_obj)
print(dict(new_obj))
 """

# Example -> 2
""" names = ["Roni",'Emran','halim']
salary = [10000, 20000, 15000]
# print(dict(zip(names,salary)))
new_zip = zip(names,salary)
# for name,salary in new_zip:
#     print(name, salary)
new_DB = {name: salary for name,salary in zip(names,salary)}
print(new_DB['Roni'])
 """

names = ["Roni",'Emran','halim']
salaries = [10000, 20000, 15000]
result = zip(names,salaries)
name,salary = zip(*result)
print(name)
print(salary)