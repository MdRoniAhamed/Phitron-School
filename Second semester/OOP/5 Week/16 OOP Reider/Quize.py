from abc import ABC, abstractmethod
class AbstractClass(ABC):
     @abstractmethod
     def some_method():
        pass
ac = AbstractClass()

print(ac)