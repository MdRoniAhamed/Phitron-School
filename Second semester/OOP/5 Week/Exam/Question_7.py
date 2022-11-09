from keyboard import wait

import cv2
import keyboard

def Book_read(file_name):
    with open(file_name, 'r') as f:
        line = f.read()
        line = line.split('--')
        for page in line:
            print(page)
            jp = keyboard.read_key()
            if jp == 'q':
                break
            elif jp != 'enter':
                input()
                wait('enter')
            else:
                input()


Book_read('Book.txt')
