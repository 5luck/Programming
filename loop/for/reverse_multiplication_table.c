// Wirte a program to print multiplication of n in reverse order
#include <stdio.h>
int main()
{
     int a,b;
     printf("Enter the number whose table you want to print in reverse order: ");
     scanf("%d",&a);
     for(b = 10 ; b >= 1 ; b-- )
     {
        printf("%d x %d = %d\n",a,b,b*a);
     }
    return 0;
}