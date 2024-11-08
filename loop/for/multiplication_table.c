// Write a program to print multiplication table of n number.
#include <stdio.h>
int main()
{
     int a,b;
     printf("Which number's multiplication table do you want to print: ");
     scanf("%d",&a);
     for(b = 1 ; b <= 10 ; b++)
     {
        printf("\n%d x %d = %d",a,b,a*b);
        // printf("Well done");
    return 0;
}
}