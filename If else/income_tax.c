#include <stdio.h>
int main()
{
     int income;
     float tax=0;
     printf("Enter Your Income:\t");
     scanf("%d",&income);
     if(income<0)
     {
        printf("Invalid Input");
     }
     else if(income<250000)
     {
        tax=0;
        printf("No Income tax");
     }
     else if(income<=500000)
     {
        tax = 0.05*(income-250000);
        printf("The total tax you have to pay is %.2f",tax);
     }
     else if(income<=1000000)
     {
        tax=(0.05*500000)+0.2*(income-500000);
        printf("The total tax you have to pay is %.2f",tax);
     }
     else
     {
        tax=(0.05*500000) + (0.2*500000) + (0.3*(income-1000000));
        printf("The total tax you have to pay is %.2f",tax);
     }
    return 0;
}