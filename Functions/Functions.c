#include <stdio.h>
//Function prototype () ke andar hum declare krte hai ki hume return type kya milna chahiye
int multi(int,int);
//Function definition
int multi(int x,int y){
    //printf("\nThe multiplication is %d",x*y);
    return x*y;
}
int main()
{
     int a=5,b=3;
     multi(a,b);   //Function call
     int a1=9,b1=30;
     //multi(a1,b1);   //Function call
     int c= multi(a1,b1);
     printf("%d",c);
    return 0;
}