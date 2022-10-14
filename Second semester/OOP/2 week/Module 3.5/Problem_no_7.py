str = input()

i,j = 0,len(str)-1
found = True
while i < j :
    if(str[i] != str[j]):
        found = False
    i +=1
    j -=1

print(found)
