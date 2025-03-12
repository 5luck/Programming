// Checking the number is prime or not using while loop
#include <stdio.h>
int main()
{
     int prime=1,n,i=2;
     printf("Enter the number : ");
     scanf("%d",&n);
     if(n<=1)
    {
     printf("%d is not a prime number",n);
    }
     else
     {
        while(i<n)
        {
            if(n%i==0)
            {
            prime=0;
            break;
            }
            i++;
        }
        if(prime==0)
        printf("%d is not a prime number",n);
        else
        printf("%d is a prime number",n);
     }
    return 0;
}