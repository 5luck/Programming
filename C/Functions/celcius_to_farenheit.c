#include <stdio.h>
float ctof(float c);
float ctof(float c){
    return (float) ((9.0/5.0)*c)+32; //9.0/5.0 krna pdega nahi to integer value m return milega
}
int main()
{
     float c=38.5;
     printf("%.1f in Farheneit is %.1f",c,ctof(c));
    return 0;
}