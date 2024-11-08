//write a program to print the sum of first n natural numbers using for loop
#include <stdio.h>
int main()
{
     int n,sum=0;
     printf("Enter the number till you have to sum: ");
     scanf("%d",&n);
     for(int i=0;i<=n;i++)
     {
        sum+=i;
     }
     printf("The sum of first %d natural numbers is %d",n,sum);
    return 0;
}