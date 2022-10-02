# odd number ==> after dividign by 2, the remainder will be 1
# even number ==> after dividing by 2, the remainder will be 0

num = 7
while num <= 20:
    num += 1
    if num % 2 ==1:
        continue
    print(num)