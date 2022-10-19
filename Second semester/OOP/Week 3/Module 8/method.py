
class Phone:
    color =  'black'
    features = ['camera' , 'water proof' ,'can be used as a hammer']
    def Call(self):
        print('ring ring ring')
    def send_sms(self,number,text):
        sms = f'sending {text} to {number}'
        return sms

my_phone = Phone()
my_phone.Call()
sms = my_phone.send_sms("01931015698","I missed to miss you")
print(sms)

