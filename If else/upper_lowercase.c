#include <stdio.h>
int main()
{
     char ch;
     printf("Enter any character:\n");
     scanf("%c",&ch);
     printf("ASCII value of %c is %d\n",ch,ch);
     if(ch>=97&&ch<=122)
     printf("The character is lowercase");
     else if(ch>=65&&ch<=90)
     printf("The character is uppercase");
     else
     printf("The input is either a number or a special symbol");
     return 0;
}