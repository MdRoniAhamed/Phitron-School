class Phone:
    manufactured = 'China'
    def __init__(self,brand,price,color):
        self.brand = brand
        self.price = price
        self.color = color
    def send_sms(self,number,text):
        sms = f"sending: {number} to {text}"
        return sms

my_phone = Phone("Oppo",35000,'blue')
print(my_phone.brand,my_phone.manufactured)
her_phone = Phone('iPhone',78780,'purple')
print(her_phone.brand,her_phone.manufactured)
dad_phone = Phone('Nokia',7000,'black')
print(my_phone.price,her_phone.price,dad_phone.price)
print(her_phone.manufactured,my_phone.manufactured,dad_phone.manufactured)
        