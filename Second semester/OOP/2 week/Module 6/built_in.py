largest = max(34,456,67,343,-343)
numb  = {43,33,56,67,34,34}
numbers  = [23,45,34,98,56,67]
big_number = max(numb)
# print(max(numbers))
number_reverse = reversed(numbers)
# print(list(number_reverse))
# print(numbers)
sorted_number = sorted(numbers,reverse=True)
# print(sorted_number)

actor = [
    {'name' : 'Sakib Khan', 'age' : 35},
    {'name' : 'Salman Khan', 'age' : 52},
    {'name' : 'sharuk Khan', 'age' : 53},
    {'name' : 'Solaiman Khan', 'age' : 23},
    {'name' : 'Bappi Khan', 'age' : 30},
]

# sorted_actor = sorted(actor,key= lambda actor : actor['age'],reverse= True)
# sorted_actor = sorted(actor,key= lambda actor : actor['name'],reverse= True)
sorted_actor = sorted(actor,key= lambda actor : actor['age'],)
# print(sorted_actor)
friends = ['Roni', 'Abdullah', 'Mamun', 'Khalid', 'Jonker']

sorted_friend = sorted(friends,reverse=False)
print(sorted_friend)