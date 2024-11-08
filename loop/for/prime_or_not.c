// Write a program to find the entered number is prime or not
#include <stdio.h>
int main()
{
     int n,prime=1;
     printf("Enter the number you want to check if it is prime or not : ");
     scanf("%d",&n);
     if(n<=1)
     {
        printf("\n%d is not a prime number.",n);
     }
     else{
     for(int i = 2; i < n; i++)
     {
         if(n%i==0)
         {
            prime=0;
            break;
         }
    }
     if(prime==0)
     printf("\n%d is not a prime number.",n);
     else 
     printf("\n%d is a prime number.",n);
     return 0;
}
}