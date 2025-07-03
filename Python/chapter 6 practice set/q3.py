# A spam comment is defined as a text containing following keywords:
# “Make a lot of money”, “buy now”, “subscribe this”, “click this”. Write a program
# to detect these spams.
a1="Make a lot of money"
a2="buy now"
a3="subscribe this"
a4="click this"
comment=input("Enter your comment: ")
if(a1 in comment or a2 in comment or a3 in comment or a4 in comment):
    print("This is a spam comment")
else:
    print("This is not a spam comment")