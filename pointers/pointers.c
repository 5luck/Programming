#include <stdio.h>
int main()
{
     int i=651;
     int* j=&i;
     int k=89;
     printf("\nThe address of i is %p",&i);
     printf("\nThe value at address of j is %d",*j);
     printf("\nThe address of k is %p",&k);
    return 0;
}