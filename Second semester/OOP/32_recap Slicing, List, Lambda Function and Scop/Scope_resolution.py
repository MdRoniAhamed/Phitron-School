# LEGB
# L = Local
# E = Enclosed( nested function )
# G = Global
# B = Builtin

# Local Scope and Global
""" 
s = "I am Global"  # Global
def f():
    s = "I am Local"  # Local
    print(s)
f()
print(s)
 """

# Enclosed Scope
""" s = "I am Global"
def outer_scope():
    s = "I am local" # outer_scope er local scope
    def inner_scope():
        # s = "Iam enclosed"
        print(s)
    inner_scope()
outer_scope() """

# Local , Global, Builtin, enclosed scope
from math import pi
s = "I am Global"
pi = 34.11
def outer_scope():
    pi = 33.11
    def inner_scope():
        pi = 3.345
        print(pi)
    inner_scope()
outer_scope()
print(pi)