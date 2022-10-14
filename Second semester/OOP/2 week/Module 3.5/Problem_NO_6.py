
s1 = input()
s2 = input()

n,m = len(s1),len(s2)
i = 0
count = m-1
if(n<m):
   for ch in s2:
    if(ch==s1[i]):
        i +=1
    if(i == count):
        break
    
m -=1
if(m==i):
    print("True")
else :
    print("False")