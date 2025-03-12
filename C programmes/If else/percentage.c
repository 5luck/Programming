#include<stdio.h>
int main()
{
    float p,m,t;
    printf("Enter the marks obtained: \n");
    scanf("%f",&m);
    printf("Enter the total marks: \n");
    scanf("%f",&t);
    if(t>=m)
    {
      p=(m/t)*100;
    printf("Your Percentage: %f",p);
    }
    else{
        printf("Marks obtained cannot be higher than the total marks");   
    }
   
    return 0;
}