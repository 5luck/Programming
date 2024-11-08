//Write a c program using recurcive function to print first n natural numbers
#include <stdio.h>
int sum_natural(int n);
int sum_natural(int n){
    if(n==1){ //Base function jaruri hota hai recursive function stop krne
        return 1;
    }
    return sum_natural(n-1)+n;
}
int main()
{ int n;
printf("Kitne numbers tk ka sum karana hai : ");
scanf("%d",&n);
     printf("The sum of first %d natural numbers is %d",n,sum_natural(n));
    return 0;
}