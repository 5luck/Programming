# Write a class “Calculator” capable of finding square, cube and square root of a number.
class Calculator:
    def __init__(self,no):
        self.no = no

    def square(self):
        print(f"The sqaure is {self.no*self.no}")

    def cube(self):
        print(f"The cube is {self.no*self.no*self.no}")

    def squareroot(self):
        print(f"The sqaureroot is {self.no**0.5}")
        
c = Calculator(9)
c.square()
c.cube()
c.squareroot()
