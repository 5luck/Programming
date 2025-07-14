#include <stdio.h>
int change(int a);
int change(int a){
    a=56;  //Misnomer
}
int main()
{
     int b=32;
     change(b); //The value of b remainsn 32
     printf("b is %d",b);
    return 0;
}