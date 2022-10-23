# input formate : 10 20 10 40 50 60 70
numbers = input().split()
for i, num in enumerate(numbers):
    numbers[i] = int(num)
target = 50
len_num = len(numbers)
a, b = 0, 0
for i in range(0, len_num-1):
    for j in range(i+1, len_num):
        sum = numbers[i] + numbers[j]
        if target == sum:
            a = i
            b = j
a += 1
b += 1
print(f'{a}, {b}')
