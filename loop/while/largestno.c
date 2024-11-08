#include <stdio.h>
int main()
{
    int a,largest=-99999;
     printf("Enter a number: ");
     scanf("%d",&a);
     while(a>=0)
     {
        if(a>largest)
        {
           largest=a;
        }
        printf("Enter another number: ");
        scanf("%d",&a);
        }
        printf("The largest number is: %d",largest);
    return 0;
}