replace_with = ["chief", "thief", "superintendent", "sweeper", "married", "left", "tried", "died"]

def find_cound(counte):
    for key,value in enumerate(replace_with):
        if counte == value:
            return key
def replace_word(text):
    new_text = ""
    txt = text.split(" ")
    
    for word in txt:
        if word in replace_with:
            count = find_cound(word)
            count +=1
            if count != len(replace_with):
                new_text += replace_with[count] + " "
            else :
                new_text += replace_with[0] +" "
        else :
            new_text += word + " "
    return new_text

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."

stri = replace_word(s)
print(stri)
