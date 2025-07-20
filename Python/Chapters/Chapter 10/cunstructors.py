class Employee:
    language = "Python"
    salary = 11000000

    def __init__(self, name, salary, language):
        self.name = name
        self.salary = salary
        self.language = language
        print("I am creating an object")
    def getinfo(self):
        print(f"The language is {self.language} and the salary is {self.salary}")
        
ritul = Employee("Ritul", 120000, "C++")
print(ritul.name, ritul.salary, ritul.language) 