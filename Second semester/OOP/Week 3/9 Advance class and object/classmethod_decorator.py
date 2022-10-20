class Shopping:

    mall = 'Jamuna Future Park'
    hour = []

    def __init__(self, customer) -> None:
        self.customer = customer
        self.items = []
        self.total = 0

    def opening_hour(cls, day):
        return cls.mall

    @staticmethod
    def muliply(x, y):
        return x * y

    def add_to_total(self, amount):
        self.total += amount

    def add_to_cart(self, item, price, quantity):
        item_total = price * quantity
        self.add_to_total(item_total)
        self.items.append(item)

    def checkout(self):
        pass
