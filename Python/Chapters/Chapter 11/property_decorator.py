class Employee:
    a = 1
    @classmethod
    def show(cls):
        print(f"The class attribut of a is {cls.a}")
    @property
    def name(self):
        return f"{self.fname}, {self.lname}"
    @name.setter
    def name(self,value):
        self.fname = value.split(" ")[0]
        self.lname = value.split(" ")[1]
e = Employee()
e.a = 45
e.show()
e.name = input("Enter your full name: ")
print(f"{e.fname}\n{e.lname}")