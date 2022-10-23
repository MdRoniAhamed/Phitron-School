import math


class Distance:

    def __init__(self, x1, y1, x2, y2):
        # Find distance.
        self.num1 = x2 - x1
        self.num2 = y2 - y1
        self.num1 = pow(self.num1, 2)
        self.num2 = pow(self.num2, 2)
        self.number = self.num1 + self.num2
        self.result = math.sqrt(self.number)

    def get_distance(self):
        print(self.result)


if __name__ == '__main__':
    x1 = int(input())
    y1 = int(input())
    x2 = int(input())
    y2 = int(input())
    result = Distance(x1, y1, x2, y2)
    result.get_distance()
