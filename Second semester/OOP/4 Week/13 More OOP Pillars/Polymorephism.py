# Poly => many
# morph => different
# print(2+8)
# print('Hello' + 'Bondhu')
# print([34,54] + [98+89])

# Overriding

class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        print('Animal making some sound')


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('meow meow')


class Dog(Animal):
    def __init__(self, name):
        Animal.__init__(self, name)

    def make_sound(self):
        print('Bark Bark')


class Horse(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print('ney ney')


don = Cat('Don')
# don.make_sound()
shepard = Dog('German Shepard')
# shepard.make_sound()

manik = Horse('Manik Roton')
# manik.make_sound()

don2 = Dog('Asol Dog')

animals = [don, shepard, manik, don2]

for animal in animals:
    animal.make_sound()
