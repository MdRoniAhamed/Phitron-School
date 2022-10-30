""" Manages Bank Account
    Project author: MD Roni Ahamed
    Gmail: mdroni0193101@gmail.com """


from mmap import ACCESS_COPY


class Account:
    accID = 1

    def __init__(self, name, age, nid_num, balance) -> None:
        self.name = name
        self.age = age
        self.nid_num = nid_num
        self.balance = balance

        # update acc id
        self.account_id = Account.accID
        Account.accID += 1

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount


acc_1 = Account('Roni', 18, 9000, 4000)
acc_2 = Account('Suche', 16, 10000, 5000)
# print('1st one',acc_1.account_id)
# print('2nd one',acc_2.account_id)

print('Deposit')
acc_1.deposit(400)
print(acc_1.balance)
acc_2.deposit(400)
print(acc_2.balance)


print('Withdraw')
acc_1.withdraw(1000)
print(acc_1.balance)
acc_2.withdraw(1000)
print(acc_2.balance)
