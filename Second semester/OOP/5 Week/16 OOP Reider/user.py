import hashlib
from random import random, randint
from brta import BRTA
from vehicles import Car, Bike, Cng
from ride_manager import uber

license_authority = BRTA()


class User:
    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        pwd_encrypt = hashlib.md5(password.encode()).hexdigest()
        with open('users.txt', 'w') as file:
            file.write(f"{email} {pwd_encrypt}")
        file.close()
        print(self.name, "user created")

    @staticmethod
    def log_in(email, password):
        stored_password = ''
        with open('users.txt', 'w') as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                    stored_password = line.split(' ')[1]
        file.close()
        hashed_password = hashlib.md5(password.encode()).hexdigest()
        if hashed_password == stored_password:
            print("Valid user")
            return True
        else:
            print("Invalid user")
            return False
        # print('Password founded', stored_password)


class Rider(User):
    def __init__(self, name, email, password, location, balance) -> None:
        self.location = location
        self.balance = balance
        super().__init__(name, email, password)

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def request_trip(self, destination):
        pass

    def start_a_trip(self, fare):
        self.balance -= fare


class Driver(User):
    def __init__(self, name, email, password, location, license):
        super().__init__(name, email, password)
        self.location = location
        self.license = license
        self.valid_driver = license_authority.validate_license(email, license)
        self.earning = 0

    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            print("Sorry you failed, try again.")
        else:
            self.license = result
            self.valid_driver = True

    def register_a_vehicle(self, vehicle_type, license_plate, rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                new_vehicle = Car(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            elif vehicle_type == 'bike':
                new_vehicle = Bike(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            else:
                new_vehicle = Cng(
                    vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
        else:
            print("You are not valid driver")

    def start_a_trip(self, destination, fare):
        self.earning += fare
        self.location = destination


raider1 = Rider('raider1', 'raider1@gmail.com',
                'raider1', randint(0, 30), 5000)
raider2 = Rider('raider2', 'raider2@gmail.com',
                'raider2', randint(0, 30), 5000)
raider3 = Rider('raider3', 'raider3@gmail.com',
                'raider3', randint(0, 30), 5000)


driver1 = Driver('driver1', 'driver1@gmail.com',
                 'driver1', randint(0, 30), 5645)
driver1.take_driving_test()
driver1.register_a_vehicle('car', 1234, 10)
driver2 = Driver('driver2', 'driver2@gmail.com',
                 'driver2', randint(0, 30), 5645)

driver2.take_driving_test()
driver2.register_a_vehicle('car', 2234, 10)

driver3 = Driver('driver3', 'driver3@gmail.com',
                 'driver3', randint(0, 30), 5645)

driver3.take_driving_test()
driver3.register_a_vehicle('car', 3234, 10)

driver4 = Driver('driver4', 'driver4@gmail.com',
                 'driver4', randint(0, 30), 5645)
driver4.take_driving_test()
driver4.register_a_vehicle('car', 4234, 10)

print(uber.get_available_cars())
uber.find_a_vehicle(raider1, 'car', 90)