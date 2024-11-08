#include <stdio.h>
int main()
{
    float p,r,t;
    float si;
     printf("Enter the value of principle amount, rate of interest and time: ");
     scanf("%f %f %f",&p,&r,&t);
     si=(p*r*t)/100;
     printf("\nThe simple interest is rupees %f",si);
    return 0;
}