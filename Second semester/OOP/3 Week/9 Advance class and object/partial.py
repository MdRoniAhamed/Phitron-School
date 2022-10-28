from functools import partial

def get_number(a,b,c,d):
    return a*1000 + b * 100 + c * 10 + d

result = get_number(6,3,2,5)
# print(result)

forth_only = partial(get_number,b=0,c=0,d=0)
number_2 = forth_only(7)
print(number_2)