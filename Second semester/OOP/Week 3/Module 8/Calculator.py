class Calculator:
    def add(self,a,b):
        sum = a+b
        return sum
    def subtract(self,a,b):
        return a-b
    def multiply(self,a,b):
        return a*b
    def divide(self,a,b):
        return a/b
    
my_calculator = Calculator()

sum = my_calculator.add(20,30)
minas = my_calculator.subtract(100,30)
multi = my_calculator.multiply(20,30)
divid = my_calculator.divide(500,30)
print(sum)
print(minas)
print(multi)
print(divid)

