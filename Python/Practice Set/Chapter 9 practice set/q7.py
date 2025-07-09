# Write a program to find out the line number where python is present from ques 6.
with open("log.txt") as f:
    content = f.readlines()
    lineno = 1
for line in content:
    if("Python" in line):
        print(f"Python found, Line no : {lineno}")
        break
    lineno += 1
else:
    print("Python not found")