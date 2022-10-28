def sum_of_number(string_s):
    str_split = string_s.split('-')
    sum = 0
    for num in str_split:
        con_int = float(num)
        sum += con_int
    return sum


str_input = input('>> enter number: ')
result = sum_of_number(str_input)
print('>> sum is: ', result)
