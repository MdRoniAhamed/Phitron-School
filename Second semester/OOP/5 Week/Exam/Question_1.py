def check_palindrome(str):
    j = len(str) - 1
    i = 0
    while(i<j):
        if(str[i] != str[j]):
            return False
        i +=1
        j -=1
    return True
str = check_palindrome(input("Enter string: "))

if str:
    print("String is palindrome")
else:
    print("String is Not palindrome")