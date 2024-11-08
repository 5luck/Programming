#include <stdio.h>
int main()
{
    int n,i;
     printf("Enter till when you want to print: ");
    scanf("%d",&i);
    for(n=1;n<i;n++)
{
    if(n>9&&n<65){
        continue; /*skip krta hai
        break; stop krta hai*/
    }
    printf("\n%d",n);
}
    return 0;
}