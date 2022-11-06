def Book_read(file_name):
    with open(file_name, 'r') as f:
        line = f.read()
        line = line.split('--')
        hight = len(line)
        i = 0
        print(line[i])
        while True:
            a = input()
            if i == hight - 1:
                i = hight - 2
            flag = True
            for letter in a:
                if letter >= 'a' and letter <= 'z':
                    flag = False
                    break
            if len(a) != 0 and flag:
                num = int(a)
                if num >= 0 and hight > num:
                    i = num - 1
                elif num < 0:
                    i += num
                else:
                    i += 1
                if 0 > i:
                    i = 0
            else:
                i += 1
            print(line[i])


Book_read('Book.txt')
