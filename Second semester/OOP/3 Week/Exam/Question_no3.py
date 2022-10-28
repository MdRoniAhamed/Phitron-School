def str_reverse(string_s):
    con_str = string_s.split(' ')
    new_string = ''
    for key, word in enumerate(con_str):
        new_string += word[::-1]
        # new_string += ''.join(reversed(word))
        if key != len(con_str) - 1:
            new_string += " "
    return new_string


s = input()

new_string = str_reverse(s)
print(new_string)
