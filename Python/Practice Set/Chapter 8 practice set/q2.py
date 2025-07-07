# Write a python program using function to convert Celsius to Fahrenheit
def ctof(c):
    f = (9/5)*c + 32
    print(f)
c = float(input("Enter temp in C: "))
ctof(c)