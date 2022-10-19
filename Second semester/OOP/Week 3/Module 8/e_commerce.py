class Shopper:

    def __init__(self,name) -> None:
        self.name = name
        self.cart = []
    def add_to_cart(self,item,price, quantity):
        self.cart.append({'item':item,'price':price,'Quantity':quantity})
    def check_out(self,amount):
        price = 0
        print('\n')
        for item in self.cart:
            print(item)
            price += item['price'] * item['Quantity']
        if amount < price:
            return f'\nPlease give me more money: {price - amount}'
        elif amount > price:
            return f'\nHere are the items and extra money: {amount - price}'
        else :
            return 'Here are the items'
    
shopping = Shopper('Toe Top')
shopping.add_to_cart('tshirt',500,3)
shopping.add_to_cart('Shoes',1000,4)
shopping.add_to_cart('Pant',1500,2)

reply = shopping.check_out(8500)
print(reply)

