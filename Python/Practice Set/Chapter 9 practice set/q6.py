# Write a program to mine a log file and find out whether it contains ‘python’
with open("log.txt") as f:
    content = f.read()
if("Python" in content):
    print("Python found")
else:
    print("Python not found")