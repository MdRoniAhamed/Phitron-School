""" Data encrypt:
        1. password k encode korbo
            pwd = password.encode()
        2. python hashlib function use korbo
            hashed_pwd = hashlib.md5(pwd).hexdigest()
     """
import hashlib


email = 'roni@gmail.com'
pwd = 'password'
pwd_encode = pwd.encode()
pwd_hash = hashlib.md5(pwd_encode).hexdigest()

your_email = 'roni@gmail.com'
your_pwd = '5f4dcc3b5aa765d61d8327deb882cf99'

hashed_your_password = hashlib.md5(your_pwd.encode()).hexdigest()
if email == your_email and pwd_hash == hashed_your_password:
    print('Right user')
else:
    print('Wrong password')

hacker_email = 'roni@gmail.com'
hacker_password = '5f4dcc3b5aa765d61d8327deb882cf99'

my_email = 'ro@gmail.com'
my_pwd = 'inthetime'
my_encode = my_pwd.encode()
my_hash = hashlib.md5(my_encode).hexdigest()

print(my_hash)




