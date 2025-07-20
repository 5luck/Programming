# Create a class “Programmer” for storing information of few programmers working at Microsoft.
class Employee:

    company = "Microsoft"

    def __init__(self, name, pin, salary):
        self.name = name
        self.pin = pin
        self.salary = salary

ritul = Employee("Ritul", 430001, "95lpa")
print(f"Printing details of {ritul.name}")
print(f"\n{ritul.name}\n{ritul.pin}\n{ritul.salary}\n{ritul.company}\n")

rohan = Employee("Rohan", 460001, "92lpa")
print(f"Printing details of {rohan.name}")
print(f"{rohan.name}\n{rohan.pin}\n{rohan.salary}\n{rohan.company}\n")

soham = Employee("Soham", 453371, "1.1cpa")
print(f"Printing details of {soham.name}")
print(f"{soham.name}\n{soham.pin}\n{soham.salary}\n{soham.company}\n")
