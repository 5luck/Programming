class Employee:
    a = 1
class Programmer(Employee):
    b = 2
class Manager(Programmer):
    c = 3
o = Employee()
print(o.a)
# print(o.b) #This will show error because there is no attribute b in Employee class
o = Programmer()
print(o.a, o.b)
o = Manager()
print(o.a, o.b, o.c)