def anagrams(list_value):
    new_list = []
    for key, value in enumerate(list_value):
        if value == True:
            continue
        list = []
        list.append(value)
        sot = ''.join(sorted(value))
        list_value[key] = True
        for i in range(key+1, len(list_value)):
            if list_value[i] == True:
                continue
            Sort = ''.join(sorted(list_value[i]))
            if len(sot) == len(Sort):
                flag = True
                for j in range(len(sot)):
                    if sot[j] != Sort[j]:
                        flag = False
                        break
                if flag:
                    list.append(list_value[i])
                    list_value[i] = True
        new_list.append(list)
    return new_list


list = anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node'])
print(list)
