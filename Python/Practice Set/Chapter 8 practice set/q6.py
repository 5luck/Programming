# Write a python function which converts inches to cms
def inches_to_cm(i):
    cm=i*2.54
    return cm
i=int(input("Enter inches: "))
print(f"{i} inches in cm = {inches_to_cm(i)}")