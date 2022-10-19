class Bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_withdrow = 100
        self.max_withdrow = 10000
    def get_balance(self):
        return self.balance
    def withdrow(self,amount):
        if amount < self.min_withdrow:
            return f'You crossed min limit: {self.min_withdrow}'
        elif amount > self.max_withdrow:
            return f'You crossed max limit: {self.max_withdrow}'
        elif amount > self.balance:
            return f'You are broke!!! No money for you'
        else :
            self.balance -= amount
            return f'Here is your money: {amount}'
    def deposite(self,amount):
        self.balance += amount

my_bank = Bank(9000)
replay = my_bank.withdrow(934)
print(replay)
print(my_bank.get_balance())
my_bank.deposite(4000)
print(my_bank.balance)
