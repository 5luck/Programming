// Write a programe to print the factorial of the given number
#include <stdio.h>
int main()
{
     int n,a=1,m=1;
     printf("Which number's factorial do you want to print? : ");
     scanf("%d",&n);
     
     if(n==0 || n==1)
     {
     printf("%d! = 1",n);
     }
     else
     {
     while(a<n)
     {
        a++;
        m*=a;
     }
     printf("%d! = %d",n,m);
     }
    return 0;
}