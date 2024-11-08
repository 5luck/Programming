#include <stdio.h>
int main()
{
     int a,b,c;
     printf("Enter percentage of all three subjects:\t");
     scanf("%d %d %d",&a,&b,&c);
     if(a<33||b<33||c<33)
     printf("Fail due to less percentage in the subject(s)");
     else if((a+b+c)/3<40)
     printf("Failed due to less overall percentage");
     else
     printf("You are passed, Your percentage is %d%%",(a+b+c)/3);
    return 0;
}