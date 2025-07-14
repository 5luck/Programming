#include <stdio.h>
int main()
{
    int a,b;
    // for defining the variables
     printf("Enter the value of A and B ");
     // input the value of A and B
    scanf("%d %d",&a,&b);
     //takes the input of the values
     a+=b;
     b=a-b;
     a=a-b;
     //logic to swap values
    printf("\nThe swapped values are %d and %d",a,b);
    // used \n to create a new line
    // The swapped values comes as the output
    return 0;
}