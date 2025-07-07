# Write a program using functions to find greatest of three numbers
def greatest(a,b,c):
    if(a>b and a>c):
        print(f"{a}")
    elif(b>a and b>c):
        print(b)
    else:
        print(c)
a=3223
b=1
c=41
greatest(a,b,c)