#  Write a python function to print first n lines of the following pattern:
# ***
# ** - for n = 3
# *
def stars(n):
    if(n==0):
        return
    print("*"*n)
    stars(n-1)
stars(10)
