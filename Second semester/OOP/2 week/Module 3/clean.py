""" 
Clean the data and get a String output 'a e i o u'
 """

data = 'aNtEriOur\n\t>>'
# print(data.lower())

new_data = data.lower()

data_string = ''

for character in new_data:
    # print(character)
    if character == 'a' or character == 'e' or character == 'i' or character == 'o' or character == 'u':
        # print(f"{character} found ")
        data_string += character + " "


print(data_string)
