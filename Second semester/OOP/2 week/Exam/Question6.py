def clean_string(text):
    output =""
    for letter in text:
        if letter >= 'a' and letter <= 'z' or letter >= 'A' and letter <= 'Z' :
            output += letter
        elif letter ==" " :
            output += letter
        

    print(output)
    return ""
    
s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)