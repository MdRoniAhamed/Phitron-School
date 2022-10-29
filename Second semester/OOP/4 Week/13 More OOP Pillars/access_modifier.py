# Public, Protected, Private
class Account:
    def __init__(self, holder) -> None:
        self._account_holder = holder


class StudentAccount(Account):
    def __init__(self, holder, balance, school):
        self.__balance = balance

    def withdraw(self, amount):
        if amount >  self.__balance:
            return 'No money for you'
        self.__balance -= amount
        return amount

    def deposit(self, amount):
        if  amount < 0 :
            return 'Negative amount can not be added'
        self.__balance += amount

    def get_balance(self):
        return self.__balance

nas = StudentAccount('Nas', 22340, 'NAS Academy')
nas.deposit(34333)
nas.deposit(8900)
print(nas.get_balance())
# print(dir(nas))
# print(nas.__balance)
print(nas._StudentAccount__balance)
