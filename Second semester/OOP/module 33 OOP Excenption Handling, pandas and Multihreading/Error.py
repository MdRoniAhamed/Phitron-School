# Python Exception Handling
# Syntax error vs exception
# Try, Except , else, finally
try:
    x = 10/1
    print(x)
except ZeroDivisionError:
    print("Zero Division Error Found")
except ValueError:
    print("Value Error found")
else: 
    print("NO error found")
finally:
    print("I will be always printed")