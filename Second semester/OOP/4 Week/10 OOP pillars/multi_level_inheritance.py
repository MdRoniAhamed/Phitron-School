class Vehicle:
    def __init__(self, name, license, price) -> None:
        self.name = name
        self.license = license
        self.price = price
        print('Vehicle class init called')

    def start(self):
        print(f'{self.name} started')


class Bus(Vehicle):
    def __init__(self, name, license, price, seat, ticket_price) -> None:
        self.seat = seat
        self.available_seats = seat
        self.ticket_price = ticket_price
        print('Bus init called')
        super().__init__(name, license, price)

    def sell_ticket(self, customer_name, quantity, amount):
        self.available_seats -= quantity
        remainder = amount - quantity*self.ticket_price
        if remainder >= 0:
            return Ticket(customer_name)
        return 'No ticket for you'


class ACBuss(Bus):
    def __init__(self):
        print('AC bus created')


class MiniBus(Bus):
    def __init__(self):
        print('mini bus created')
        super().__init__('Mini Mini', 'ABSXWT34', 1300000, 56, 532)
        # Bus.__init__(self,'Mini Mini', 'ABSXWT34', 1300000, 56, 532)
        # super().sell_ticket('Emran', 3, 1000)


class Ticket:
    def __init__(self, owner) -> None:
        self.owner = owner


mini = MiniBus()
print(mini.name)
print(mini.seat)
print(mini.available_seats)
