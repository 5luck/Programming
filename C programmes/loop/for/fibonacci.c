#include <stdio.h>
int main()
{
     int n,sum=0,a=0,b=1;
     printf("How many numbers do you want to print?\n");
     scanf("%d",&n);
     printf("%d  %d",a,b);
     for(int i=2;i<n;i++){
        sum=a+b;
        printf("  %d",sum);
        a=b;
        b=sum;
     }
    return 0;
}