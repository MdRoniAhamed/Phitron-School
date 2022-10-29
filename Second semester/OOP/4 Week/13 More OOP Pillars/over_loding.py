# method over loading
# print(max(45, 768, 987.45, 34))
# print(max([4e5, 45, 343]))
# print(max('a', 'B', 'D', 'z'))

def add(num1, num2,  num3=0, num4=0):
    return num1 + num2 + num3


# print(add(45, 87))
# print(add(34, 45, 67))

def add2(*args, **Kwargs):
    pass


# Operator overloading
print(34 + 89)
print('W' + 'H')


class Account:
    def __init__(self, holder, balance) -> None:
        self.holder = holder
        self.__balance = balance

    def __add__(self, other):
        return self.__balance + other.__balance
    def __eq__(self, __o: object) -> bool:
        return self.__balance == __o.__balance

my_account = Account('Sakib all Hasan ', 50000)
her_account = Account('Shishir vabi', 90000)
result = my_account + her_account
result1 = my_account == her_account
print(result1)
