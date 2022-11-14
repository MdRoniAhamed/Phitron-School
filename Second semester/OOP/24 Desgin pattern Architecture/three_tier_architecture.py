class Data:
    def __init__(self) -> None:
        self.data = {
            'order1':{'item':'laptop','price':50000},
            'order2':{'item':'tablet','price':5000},
            'order3':{'item':'watch','price':4000},
            'order4':{'item':'phone','price':59000}
        }

    def get_order_detail(self, orderId):
        return self.data[orderId]

class Application:
    pass

class GUI:
    pass