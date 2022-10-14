from ctypes import sizeof


s1 = input()
s2 = input()

s3 = ""

n , m = len(s1),len(s2)
count = 0
while count < n:
    s3 += s1[count] + s2[m-1]
    m -= 1
    count +=1

print(s3)

