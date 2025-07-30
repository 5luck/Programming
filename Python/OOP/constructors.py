class Item:
    def __init__(self, name : str, price : int, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity
    def calculate_total_price(self):
        print(self.price * self.quantity)
item1 = Item("S24 Ultra", 119999, 6)
item2 = Item("Iphone 16 Pro Max", 149999, 3)
item1.calculate_total_price()
item2.calculate_total_price()
print(Item.__dict__) #Lists all the class attributes
print(item1.__dict__) #Lists all the instance attributes
print(item2.__dict__) #Lists all the instance attributes