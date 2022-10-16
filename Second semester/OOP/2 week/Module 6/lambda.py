# def square (x):
#     return x * x

square = lambda x: x * x
result = square(6)
# print(result)

add = lambda x,y : x+y

sum = add(34,786)
# print(sum)
number = [41,45,645,676,49]

def double_it(x):
    return x * 2

double_it1 = lambda x: x *2
# doubled_numbers = map(double_it,number)
doubled_numbers = map(lambda x: x*2 ,number)
square_numbers = map(lambda x: x*x ,number)
# print(number)
# print(list(square_numbers))

bigger_number = filter(lambda num: num> 50,number)
# print(number)
# print(list(bigger_number))

actor = [
    {'name' :'sakib','age' : 34 },
    {'name' :'manna','age' : 50 },
    {'name' :'sabana','age' : 65 },
    {'name' :'bubli','age' : 30 },
]

senior_artists = filter(lambda actor: actor['age']> 35,actor)
# print(list(senior_artists))
junior_artists = filter(lambda actor: actor['age']<35 , actor)
print(list(junior_artists))