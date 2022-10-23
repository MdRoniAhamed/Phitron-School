def found_stirng(str_s):
    len_str = len(str_s)
    new_string = ''

    for i in range(0, len_str, 2):
        size_len = int(str_s[i+1])
        for j in range(0, size_len):
            new_string += str_s[i]
    return new_string


def sort_string(s):
    new_str = ''
    for i in range(0, 27):
        a = chr(ord('a')+i)
        b = chr(ord('A')+i)
        for char in s:
            if a == char or b == char:
                new_str += char

    return new_str


s = input()
result = found_stirng(s)
new_result = sort_string(result)
print(new_result)
