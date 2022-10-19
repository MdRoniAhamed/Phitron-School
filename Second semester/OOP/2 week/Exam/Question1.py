
def create_string(list_in):
    str = ""
    for index,li in enumerate(list_in):
        str += li
        if index != len(list_in) -1:
            str += " "
    return str
 
l = ["This", "is", "very", "fantastic"]
string_st = create_string(l)
print(string_st)
 
