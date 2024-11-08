#include <stdio.h>
int main()
{
     int sum=0;
     int a;
     printf("Enter a number: ");
     scanf("%d",&a);
     sum+=a;
     while(a>0)
     {
         printf("Enter another number: ");
         scanf("%d",&a);
         sum+=a;
     }
     printf("The sum of the numbers you entered is: %d",sum);
    return 0;
}