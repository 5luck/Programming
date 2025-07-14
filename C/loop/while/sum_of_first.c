//write a program to print the sum of first n natural numbers using while loop
#include <stdio.h>
int main()
{
     int n,i=0,sum=0;
     printf("Sum till how many natural numbers? : ");
     scanf("%d",&n);
     while(i<n)
     {
        i++;
        sum+=i;
     }
     printf("The sum of first %d natural numbers is %d",n,sum);
     return 0;
}