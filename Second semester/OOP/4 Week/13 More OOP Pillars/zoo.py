from abc import ABC,abstractmethod

#  Abstract base class
class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass
    @property
    @abstractmethod
    def name(self):
        pass
    @abstractmethod
    def move(self):
        print('Moving around in the zoo')

class Tiger(Animal):
    def eat():
        pass
    def move(self):
        pass


class Monkey(Animal):
    def __init__(self) -> None:
        self.__name = 'Monkey'
    def sing(self):
        print('Monkey is singing')
    def eat(self):
        print('Eating banana')
    @property
    def name(self):
        return self.__name
    @name.setter
    def name(self,value):
        self.__name = value

    def move(self):
        print('hanging on the branches of the trees')
        super().move()

layka = Monkey()
print(layka)
layka.eat()
layka.move()
layka.name = 'Moonkey'
print(layka.name)