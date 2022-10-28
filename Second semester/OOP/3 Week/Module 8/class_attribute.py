from dis import show_code


class Shop:
    cart = []
    def __init__(self,buyer):
        self.buyer = buyer
        self.cart = []
    def add_to_cart(self,items):
        self.cart.append(items)

Shopper_1 = Shop('Fahim')
Shopper_1.add_to_cart('tshirt')
print(Shopper_1.cart)

Shopper_2 = Shop('Chanacur Khan')
Shopper_2.add_to_cart('Shoes')
print(Shopper_2.cart)