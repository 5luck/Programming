#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to check if it is even or odd\n");
    scanf("%ld",&a);
    if(a%2==0)
    {
        printf("%ld is an even number",a);
 
    }
    else
    {
        printf("%ld is an odd number",a);
    }
    return 0;
}