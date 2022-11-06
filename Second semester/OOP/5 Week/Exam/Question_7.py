from keyboard import wait
def Book_read(file_name):
    with open(file_name, 'r') as f:
        line = f.read()
        line = line.split('--')
        for page in line:
            print(page)
            wait('enter')

Book_read('Book.txt')
