#include <stdio.h>
int main()
{
     int a,b,c,d;
     printf("Enter the numbers:\n");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     if(a>b&&a>c&&a>d)
     printf("\n%d is the greatest",a);
     else if(b>a&&b>c&&b>d)
     printf("\n%d is the greatest",b);
     else if(c>a&&c>b&&c>d)
     printf("\n%d is the greatest",c);
     else
     printf("\n%d is the greatest",d);
    return 0;
}