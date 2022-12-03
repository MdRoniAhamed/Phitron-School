# Single inheritance
# Multiple inheritance
#multilevel inheritance

# Multiple inheritance
""" 
class GrandParent():
    def __init__(self) -> None:
        self.string = "I am a grand Parent"

class Parent():
    def __init__(self) -> None:
        self.string = "I am a Parent"
    
class Child(Parent, GrandParent):
    def __init__(self) -> None:
        # Parent.__init__(self)
        # super().__init__()
        # super(G).__init__()
        Parent.__init__(self)
        GrandParent.__init__(self)
        self.string = "I am a Child"

c = Child()
print(c.string)
print(c.string) """

# Multilevel inheritance

class GrandParent():
    def __init__(self) -> None:
        self.string = "I am a grand Parent"

class Parent(GrandParent):
    def __init__(self) -> None:
        self.string = "I am a Parent"
        super().__init__()
    
class Child(Parent):
    def __init__(self) -> None:
        # Parent.__init__(self)
        # super().__init__()
        # super(G).__init__()
        Parent.__init__(self)
        # self.string = "I am a Child"

c = Child()
print(c.string)
print(c.string)