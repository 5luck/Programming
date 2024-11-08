// Write a C program that continuously prompts the user to enter a number until they enter a negative number. 
//The program should keep a count of how many positive numbers have been entered (including zero) and print this count when a negative number is entered.

#include <stdio.h>
int main()
{    int a,count=0;
     printf("Enter a number:");
     scanf("%d",&a);
     while(a>=0)
     { 
        count++; //count + 1
        printf("\nThe number you have entered is not negative\nEnter another number: ");
        scanf("%d",&a);
     }
     if(a<0)
     printf("The number you have entered is negative");
     printf("\nYou have entered positive number %d times",count);
     return 0;
}

