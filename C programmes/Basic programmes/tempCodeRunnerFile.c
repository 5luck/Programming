#include <stdio.h>
int main()
{
    int n,a,b,c,rev;
     printf("enter any no: ");
     scanf("%d",&n);
     a=n%10;
     n=n/10;
     b=n%10;
     n=n/10;
     c=n;
     rev=a*100+b*10+c;
    printf("The reverse is %d",rev);
    return 0;
}