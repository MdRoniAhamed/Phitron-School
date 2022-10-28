class Shopping:
    def  __init__(self,customer) -> None:
        self.customer = customer
        self.items = []
        self.total = 0

    @staticmethod 
    def muliply(x,y):
        return x * y

    def add_to_total(self,amount):
        self.total += amount
    
    def add_to_cart(self,item,price, quantity):
        item_total = price * quantity
        self.add_to_total(item_total)
        self.items.append(item)
    
    def checkout(self):
        pass

result = Shopping.muliply(4,5)
print(result)
my_shopping = Shopping('Nuzrul Islam')
my_shopping.add_to_total(34)
my_shopping.add_to_total(34)
print(my_shopping.total)
result_3 = my_shopping.muliply(34,10)
print(result_3)
# result_2 = Shopping.add_to_cart(454)