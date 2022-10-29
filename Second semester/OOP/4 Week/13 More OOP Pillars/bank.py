class Account:
    def __init__(self, holder, initial_balance):
        self.holder = holder #Public attribute 
        self._account_number = 165
        self.__balance = initial_balance    #__balance is a private attribute

    def deposit(self, amount):
        print(f'Adding {amount} to your account')
        self.__balance += amount

    def withdraw(self, amount):
        print(f'Withdrawing {amount} from your account')
        self.__balance -= amount 



class StudentAccount(Account):
    def __init__(self, holder, initial_balance, school):
        self.school = school
        super().__init__(holder, initial_balance)

    def get_balance(self):
        return self._account_number


rafsan = StudentAccount('Rafsan', 50000, 'IUB')

# print(rafsan.__balance)
print(rafsan.holder)
rafsan.deposit(20000)
rafsan.deposit(35000)
rafsan.deposit(15000)
rafsan._account_number = 145
print(rafsan._account_number)
# print(rafsan.get_balance())
# rafsan.__balance = 0
# print(rafsan.__balance)