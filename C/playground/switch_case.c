#include <stdio.h>
int main()
{
    int n,a,b,sum,sub,mul,div,mod;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("\nEnter the number you want the sum of: \n");
            scanf("%d %d",&a,&b);
            sum=a+b;
            printf("%d",sum);
    
        case 2:
            printf("\nEnter the number you want the substraction of: \n");
            scanf("%d %d",&a,&b);
            sub=a-b;
            printf("%d",sub);
    
        case 3:
            printf("\nEnter the number you want the multiplication of: \n");
            mul=a*b;
            printf("%d",mul);
            scanf("%d %d",&a,&b);
    
        case 4:
            printf("\nEnter the number you want the division of: \n");
            scanf("%d %d",&a,&b);
            div=a/b;
            printf("%d",div);
    
        case 5:
            printf("\nEnter the number you want the modulus of: \n");
            scanf("%d %d",&a,&b);
            mod=a%b;
            printf("%d",mod);
    
        default:
            printf("You entered a number that is not between 1 and 5\n");
    }
    return 0;
}