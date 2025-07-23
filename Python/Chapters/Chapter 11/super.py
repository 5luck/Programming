class Employee:
    def __init__(self):
        print("This is an Employee")
    a = 1
class Programmer(Employee):
    def __init__(self):
        print("This is a Programmer")
    b = 2

class Manager(Programmer):
    def __init__(self):
        super().__init__() 
        print("This is a Manager")
    c = 3

# o = Employee()
# print(o.a)
# # print(o.b) #This will show error because there is no attribute b in Employee class

# o = Programmer()
# print(o.a, o.b)

o = Manager()
print(o.a, o.b, o.c)