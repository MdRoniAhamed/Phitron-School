from math import sqrt


def Reverse_Root():
    root = float(input())
    if root != 1:
        return 
    Reverse_Root()
    print("%.4lf\n",sqrt(root))


Reverse_Root()
