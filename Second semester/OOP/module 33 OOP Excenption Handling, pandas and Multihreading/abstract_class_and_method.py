# Abstract method হচ্ছে যে method আমরা তৈরি করবো কিন্তু oi method er kuno kaj thakbana.
#Abstrat class hossa kuno ekta class er blue print toiri korer konno je class toiri kora hoy shetai holo Abstract class.

from abc import ABC, abstractmethod
class Vehicle(ABC):
    @abstractmethod
    def go(self):
        pass
    @abstractmethod
    def stop(self):
        pass

class Car(Vehicle):
    def go(self):
        print("I am a CAR")
    def stop(self):
        print("Stop your Car")

class MotorBike(Vehicle):
    def go (self):
        print("I am a motor bike")
    def stop(self):
        print("Stop your motorbike")

# V = Vehicle()  // amra Abstract class ke kuno somoy e access korta pari na
car = Car()
car.go()
mb = MotorBike()
mb.go()
# V = Vehicle()