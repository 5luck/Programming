#include<stdio.h>
int main()
{
    char n[50];
    float p,m,t;
    
printf("Enter your Name: ");
scanf("%s",n);
printf("\nEnter the marks obtained: ");
scanf("%f",&m);
printf("\nEnter the total marks: ");
scanf("%f",&t);
p=(m/t)*100;  
    if(p<0||p>100)
    {
        printf("Invalid Percentage");
    }
    else if(p>=70)
    {
        printf("Congratulations %s! You got Grade A, Your Percentage: %.2f%%",n,p);
    }
    else if(p>50)
    {
        printf("Nice try %s! You got Grade B, Your Percentage: %.2f%%",n,p);
    }
    else if(p>30)
    {
        printf("Disappointing %s! You got Grade C, Your Percentage: %.2f%%",n,p);
    }
    else
    {
        printf("Sorry to say %s, you've failed, Your Percentage: %.2f%%",n,p);
    }
    return 0;
}