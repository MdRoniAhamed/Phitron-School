
while True:
    num = input()
    if(num == 'Quit'):
        break
    num = int(num)
    if num >=0:
        print(f'{num} is positive')
    elif num < 0:
        print(f'{num} is negative')

print('stop the program')