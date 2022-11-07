import csv

with open('my_friend.csv', 'r') as file:
    lines = csv.reader(file)
    header = next(lines)
    for line in lines:
        print(line)
    print(header)