
str = input()
lower_case = 0
upper_case = 0
digit = 0
symbol = 0

for char in str:
    if char >='a'and 'z' >= char:
        lower_case +=1
    elif char >= 'A' and 'Z' >= char:
        upper_case +=1
    elif char >= '0' and char <= '9':
        digit +=1
    else :
        symbol +=1

print(f"Uppercase = {upper_case}")
print(f"Lowercase = {lower_case}")
print(f"Digits = {digit}")
print(f"Symbol = {symbol}")

