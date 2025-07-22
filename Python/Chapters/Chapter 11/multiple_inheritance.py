class Employee:
    company = "ITC"
    name = "xyz"
    def show(self):
      print(f"The name is {self.name} and the salary is TBD")
class coder:
    company = "Infosys"
    def show(self):
        print(f"The name is {self.name} and the salary is {self.salary}")
    def showLang(self):
     print(f"The name is {self.name} and the language is {self.language}")
class Programmer(Employee, coder):
     company = "Infosys"
     language = "Python"
     def showLang(self):
       print(f"The name is {self.name} and the language is {self.language}")
a = Employee()
b = Programmer()
a.show()
b.show()
b.showLang()