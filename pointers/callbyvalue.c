#include <stdio.h>
int sum(int*,int*);
int sum(int*a,int*b){
    *a=69;
    return *a+*b;
}
int main()
{
     int x=3;
     int y=4;
     printf("The sum of %d and %d is %d",x,y,sum(&x,&y));
     return 0;
}