#include <stdio.h>
int main()
{
     int i=6;
     int* j=&i;
     int** k=&j;
     printf("The value of i is %d",*j);
     printf("\nThe value of i is %d",**(&k));
    return 0;
}