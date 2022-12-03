#Instance method
#Static method
#Class method
#Abstract method

class School:
    School_name = "ABC School" # Class variable
    def __init__(self, name) -> None:
        self.name = name  # self.name Instance variable
    def printname(self): # Instance method 
        print(self.name)
    def change_name(self,name):
        self.School_name = name
    @classmethod
    def change_school_name(cls): # Class method
       cls.School_name = "ABCD School" # Class variable
    @staticmethod
    def greet(): # Static method
        print('Hello Students')

        

S = School("Roni")
S2 = School("Roni")
School.change_school_name()

School.greet()