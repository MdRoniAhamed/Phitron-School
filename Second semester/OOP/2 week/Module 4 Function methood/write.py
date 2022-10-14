""" # with open('massage.txt' , 'w' ) as file_write:
#     file_write.write("Hello Roni Ahamed")
with open('massage.txt' , 'a' ) as file_write:
    file_write.write("Hello Roni Ahamed")

     """
with open('massage.txt' , 'r') as file_read:
    txt = file_read.read()
    print(txt)