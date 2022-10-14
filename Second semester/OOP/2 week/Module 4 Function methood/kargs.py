from ast import arg


def full_name(f_name,l_name):
    name = f'{f_name} {l_name}'
    return name

name = full_name(l_name="Chowdhury",f_name="Choto")

# print(name)

def long_name(**kargs):
    print(kargs)

# long_name(first= "Dr. ",last = "Chowdhury",middle = "Roni")

def mixed_name(nam1,nam2,**name_parts):
    print(nam1,nam2,name_parts)

# name = mixed_name(nam1 = "Chowdhury",nam2= "Choto",middle = "majari")

def all_type(first,*args,**kagrs):
    print(first)
    for word in args:
        print(word,end=" ")
    print
    for key,value in kagrs.items():
        print(key,value)

all_type("hello", "how ","are","you",'i ',name = 'Abul', father = 'Babul')