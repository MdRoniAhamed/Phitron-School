
str = input()
new_string = ''

for char in str:
    if(char>= 'a' and char <= 'z'):
        new_string += chr(ord(char)-32)
    elif char>='A' and char <= 'Z' :
        new_string += chr(ord(char)+32)
    else:
        new_string+= char
print(new_string)
