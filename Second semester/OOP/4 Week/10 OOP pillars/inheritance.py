# Inheritance

# base class only the common attributes and methods
# DRY ==> Do not Repeat Yourself

class Device:
    def __init__(self, brand, price, color) -> None:
        self.brand = brand
        self.price = price
        self.color = color

    def re_sale(self):
        print('reade to sell again')


class Laptop(Device):
    def __init__(self, brand, price, color, disc_size) -> None:
       super().__init__(brand, price, color)
       self.disc_size = disc_size

    def run(self):
        print('Running the laptop')

    def __repr__(self) -> str:
        return f'Laptop {self.brand} : {self.price} : {self.color}'

    def purchase(self, money, discount):
        if money < (self.price - self.price * discount / 100):
            return 'No laptop for you'
        else:
            print('This device for you')
            return money - self.price


class Phone:
    def __init__(self, brand, price, color, camera, sim_num) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.camera = camera
        self.sim_num = sim_num

    def is_dual_sim(self):
        return self.sim_num > 1

    def __repr__(self) -> str:
        return f'Phone {self.brand} : {self.price} : {self.color}'


class Watch:
    def __init__(self, brand, price, color, watch_type) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.watch_type = watch_type

    def is_digital(self):
        return self.watch_type == 'digital'

    def __repr__(self) -> str:
        return f'Watch {self.brand} : {self.price} : {self.color}'


class Manager:
    def __init__(self, name, salary, experience, designation) -> None:
        pass

    def withdrow_salary(self):
        pass

    def day_total_sales(self):
        pass

    def handle_customr_complain(self):
        pass


class SalesPerson:
    def __init__(self, name, salary, experience, desgnation, commition):
        pass

    def withdrow_salary(self):
        pass

    def handle_customar(self):
        pass


hp = Laptop('HP', 40000, 'Silver', '800 GB')
lenovo = Laptop('Lenovo', 56999, 'Black', '600GB')
print(lenovo)
print(hp)

oppo = Phone('Oppo', 23000, 'Blue', '13 mp', 2)
samsung = Phone('Samsung', 24999, 'Silver', '34 mp', 1)
print(samsung)
print(oppo)

hp.re_sale()
print(hp.brand)