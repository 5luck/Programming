# Write a program to read the text from a given file ‘poems.txt’ and find out
# whether it contains the word ‘twinkle’
with open("poems.txt") as f:
    l = f.read()
print(l)
if "twinkle" in l.lower():
    print("Found")