// Write a program to print the table and add the multiplication till 10
#include <stdio.h>
int main()
{
    int n,a,m,sum=0;
     printf("Enter the number you want to print the table of and add the table : ");
     scanf("%d",&n);
     for(a=1;a<=10;a++)
     {
        m=n*a;
        sum+=m;
        printf("%d x %d = %d\n",n,a,m);
     }
     printf("The sum of table is %d",sum);
    return 0;
}