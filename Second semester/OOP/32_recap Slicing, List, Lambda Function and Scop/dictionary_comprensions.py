# Dictionary Comprehensions

# Example -> 1
""" dct = {i:i+10 for i in range(10)}
print(dct)
 """

# Example -> 2
""" dct = {'jack':30, "Roni": 18, "Fariha":17 }
new_dct = {k:v for k,v in dct.items() if v%2==0}
print(new_dct) """

# Example -> 3
""" dct = dct = {'jack':30, "Roni": 18, "Fariha":17 }
new_dct = {k:v for k,v in dct.items() if v%2!=0 if v<18}
print(new_dct) """

# Example -> 4
""" dct = {'jack':50, "Roni": 18, "Fariha":17 }
new_dct = {k:('old' if v>= 50 else 'young') for k,v in dct.items()}
print(new_dct) """

# Example -> 5
dct = {k1: {k2: k1*k2} for k2 in range(6) for k1 in range(5)}
print(dct)
