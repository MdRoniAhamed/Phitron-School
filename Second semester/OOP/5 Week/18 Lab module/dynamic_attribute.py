class Item :
    all = []

    def __init__(self, itemName, itemPrice) -> None:
        self.__itemName = itemName
        self.__itemPrice = itemPrice
        self.all.append(self)

    def __repr__(self) -> str:
        return f"Item({self.itemName}, {self.itemPrice})"
item1 = Item("Bowl",300)
item2 = Item("Plate",100)
item1._Item__discount = 39
item1._Item__itemName = "Bowl Broken"
# print(item1._Item__itemName)
print(item1.__dict__)








# item1.discount = 30
# item2.offer = "50%"
# Item.all.append(item1)
# print(Item.all)
# print(item1.all)
# print(item2.all)
# print(Item.all)
# print(item1.__dict__)
# print(item2.__dict__)