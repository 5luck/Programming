// Write a program to calculate the force of attraction of a body of mass m by earth. Take g=9.8
#include <stdio.h>
float force(float m);
float force(float m){
    return m*9.8;
}
int main()
{
    float mass=10.0;
    printf("The force exerted by %.2f Kg is %.2fN",mass,force(mass));
    return 0;
}