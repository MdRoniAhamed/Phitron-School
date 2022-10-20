# Dunder 
# Magic method
# Special method
class Person:
    def __init__(self,name,age,money,height = 65) -> None:
        self.name = name
        self.age = age
        self.money = money
        self.height  = height
    def __eq__(self,other):
         return self.age == other.age
    def __call__(self):
        return f'This is {self.name} with age {self.age} and have {self.money} TK'
    def __len__(self):
        return self.height
    def __add__(self,other):
        # return self.money + other.money 
        return self.age + other.age 

alim = Person('Alim',15,643)
dalim = Person('Dalim',16,790)
print(alim+dalim)
print('Compare two object',alim == dalim )
print(len(alim))
