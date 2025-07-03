# Create an empty dictionary. Allow 4 friends to enter their favorite language as
# value and use key as their names. Assume that the names are unique.
dict={}
name=input("Enter your name: ")
lang=input("Enter your favorite language: ")
dict.update({name:lang})
name1=input("Enter your name: ")
lang1=input("Enter your favorite language: ")
dict.update({name1:lang1})
name2=input("Enter your name: ")
lang2=input("Enter your favorite language: ")
dict.update({name2:lang2})
name3=input("Enter your name: ")
lang3=input("Enter your favorite language: ")
dict.update({name3:lang3})
print(dict)