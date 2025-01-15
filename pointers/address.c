#include <stdio.h>
int main()
{
     int a=6;
     int* b= &a;
     printf("The value at address a is %d and address of a is %p",*b,&a);
    return 0;
}