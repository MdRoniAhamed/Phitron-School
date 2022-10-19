def create_list(d):
    new_list = []
    for key,value in d.items():
        new_list.append(key)
        new_list.append(value)
    return new_list

d = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}

dict_to_list = create_list(d)
print(dict_to_list)