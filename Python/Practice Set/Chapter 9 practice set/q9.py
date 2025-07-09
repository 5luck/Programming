# Write a program to find out whether a file is identical & matches the content of
# another file
with open("this_copy.txt","r") as f1, open("this.txt","r") as f2:
    if f1.read() == f2.read():
        print("Files are identical")
    else:
        print("Files are not identical")