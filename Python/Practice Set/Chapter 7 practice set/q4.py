# Write a program to find whether a given number is prime or not.
p=int(input("Enter a number: "))
for i in range(2,p):
    if(p%i==0):
        print(f"{p} is not a prime number")
        break
    else:
        print(f"{p} is a prime number")
        break