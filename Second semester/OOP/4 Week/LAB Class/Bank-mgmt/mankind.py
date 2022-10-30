""" All about mankind
    Project author: MD Roni Ahamed
    Gmail: mdroni0193101@gmail.com """


class Human:
    def __init__(self, gender, height, weight):
        self.gender = gender
        self.height = height
        self.weight = weight


class Police(Human):
    def __init__(self, cases, nationality, gender, height, weight):
        super().__init__(gender, height, weight)
        self.cases = cases
        self.nationality = nationality


class CsEngineer(Human):
    def __init__(self,  love_to_code, has_gf, gender, height, weight):
        super().__init__(gender, height, weight)
        self.love_to_code = love_to_code
        self.has_gf = has_gf


if __name__ == '__main__':
    police = Police(True, 'Bangladeshi', 'male', 68, 50)
    print(police.height)

    eng = CsEngineer(True, False, 'male', 67, 51)
    print(eng.has_gf)

    print('Eng 2')
    eng2 = CsEngineer(height=  67, weight=51, has_gf=False, love_to_code=True, gender='male')
    print(eng2.weight)
