def replace_comma_with_space(text):
    new_text = ""
    for letter in text:
        if letter==',' :
            new_text += " "
        else:
            new_text += letter
    return new_text

s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
