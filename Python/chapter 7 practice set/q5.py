# Write a program to find the sum of first n natural numbers using while loop.
sum = 0
n = int(input("Enter number: "))
for i in range(1,n+1):
    sum+=i
print(sum)