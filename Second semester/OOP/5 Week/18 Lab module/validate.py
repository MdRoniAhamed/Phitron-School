class Item:
    def __init__(self, itemName, itemPrice) -> None:
        assert itemPrice >= 0 , f"Error line 3, {itemPrice} is invalid"
        self.itemName = itemName
        self.itemPrice = itemPrice

class Person:
    def __init__(self, name, phone, age) -> None:
        assert age > 13, f"Only grater than 13 is accepted"
        assert len(phone) == 11, f"Invalid Phone Number: {phone}"
        self.name = name
        self.age = age
        self.phone = phone
    
    def __repr__(self) -> str:
        return f"{self.name} {self.age} {self.phone}"


user = Person('Roni',"01931015698", 15)
print(user)

# item = Item('Orange', -100)
# print(item.itemName, item.itemPrice)