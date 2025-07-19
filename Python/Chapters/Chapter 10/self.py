class Employee:
    language = "Python"
    salary = 11000000

    def getinfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")
    @staticmethod
    def greet():
        print("Good morning")
        
Employee.greet()
rahul = Employee()
rahul.getinfo()