""" 
Encrypt the following code so that no one can get your strategy.
"""
# data = "firebaby"

data = 'firebaby'
shift = 2
output = ''

for character in data:
    # print((ord(character)+ shift-97) % 26+97   )
    output += chr((ord(character)+ shift - 97 ) % 26 + 97)

print(output)

# for chara in output:
#     print(chara)

