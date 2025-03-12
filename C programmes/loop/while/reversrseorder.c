#include <stdio.h>
int main()
{ 
    int i,n,r=0;
     printf("Enter a number:");
     scanf("%d",&n);
     while(n>0)
     {
        i=n%10;
        r=r*10+i;
        n=n/10;
     }
     printf("%d",r);
    return 0;
}