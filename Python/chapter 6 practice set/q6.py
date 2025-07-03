# Write a program to calculate the grade of a student from his marks from the
# following scheme:
# 90 – 100 => Ex
# 80 – 90 => A
# 70 – 80 => B
# 60 – 70 =>C
# 50 – 60 => D
# <50 => F
m1=int(input("Enter marks of subject 1: "))
m2=int(input("Enter marks of subject 2: "))
m3=int(input("Enter marks of subject 3: "))
m4=int(input("Enter marks of subject 4: "))
m5=int(input("Enter marks of subject 5: "))
m6=int(input("Enter marks of subject 6: "))
percentage=(m1+m2+m3+m4+m5+m6)/600*100
if(100>=percentage>90):
    print(f'''    Grade Ex
    Your percentage: {percentage}%''')
elif(90>=percentage>=80):
    print(f'''    Grade A
    Your percentage: {percentage}%''')
elif(80>=percentage>=70):
    print(f'''    Grade B
    Your percentage: {percentage}%''')
elif(70>=percentage>=60):
    print(f'''    Grade C
    Your percentage: {percentage}%''')
elif(60>=percentage>=50):
    print(f'''    Grade D
    Your percentage: {percentage}%''')
else:
    print(f'''    Grade F
    Your percentage: {percentage}%''')
    