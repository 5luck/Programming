# Write a python function to remove a given word from a list ad strip it at the same
# time

def strip(l,word):
    n=[]
    for item in l:
        if not(item==word):
            n.append(item.strip(word))
    return n
l=["Hello", "World", "Haha"]
print(f"{strip(l,"H")}")