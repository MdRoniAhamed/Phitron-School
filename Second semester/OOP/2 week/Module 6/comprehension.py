numbers  = [23,45,34,45,56,67]
odd_number = []
for i in numbers:
    if i%2 == 1:
        odd_number.append(i)
# print(odd_number)

odd_number2 = [num for num in numbers if num%2 == 1 if num%5==0]
# print(odd_number2)
names = {'sakib', 'sabbir','salman'}
ages = [37,35,20]
pair = [(name,age) for name in names for age in ages if age<21 ]
# print(pair)

for name in names:
    print(name)
    for age in ages:
        if age<21:
            print(name,age)