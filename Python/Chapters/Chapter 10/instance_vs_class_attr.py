class Employee:
    language = "Python"
    salary = 11000000
ritul = Employee()
ritul.language = "JavaScript" #Instance attribute have preference over class attribute.
print(ritul.language, ritul.salary)