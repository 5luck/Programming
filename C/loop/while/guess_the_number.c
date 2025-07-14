#include <stdio.h>
int main()
{
     int attempts=5,a,n=69;
     printf("Guess the number(Between 1 to 100): ");
     scanf("%d",&a);
     
     while(a!=n && attempts>0)
     {
      
        if((n-a)>10)
        {
            attempts--;
        printf("\nToo low\nAnother guess: ");
        scanf("%d",&a);
        printf("\nYou have %d tries left",attempts);
        }
        else if((n-a)<10)
       {
        attempts--;
         printf("\nYou're close\nAnother guess: ");
               scanf("%d",&a);
         printf("\nYou have %d tries left",attempts);
       }
       else if((n-a<-10))
       {
        attempts--;
        printf("\nToo high\nAnother guess: ");
          scanf("%d",&a);
         printf("\nYou have %d tries left",attempts);
         }
         else if((n-a>-10))
         {
         attempts--;
         printf("\nYou're close\nAnother guess: ");
               scanf("%d",&a);
         printf("\nYou have %d tries left",attempts);
         }
         
        }
          if(a==n)
         {
            printf("\nYou're correct!");
         }
    return 0;
}