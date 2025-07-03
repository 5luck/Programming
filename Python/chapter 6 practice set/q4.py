# Write a program to find whether a given username contains less than 10
# characters or not.
uname=input("Enter your username: ")
if(len(uname)>10):
    print("You cannot use more than 10 characters in your Username")
else:
    print("Valid Username")