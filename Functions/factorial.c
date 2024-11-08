/*Is program mai humne ek function bnaya factorial naam ka aur usme jo logic lagaya uske hisab se agar hum koi
value dale like 4 to wo 3! * 4 krega aur fir 3! ka 2! * 3 krega fir aise hi aur agar 1! ya 0! ayega to wo 1 return krdega*/
#include <stdio.h>
int factorial(int n);
//  n! = 1 x 2 x 3 x 4 x ..... x n-1 x n
//  (n-1)! = 1 x 2 x 3 x 4 x n-1
// n! = n(-1)
int factorial(int n){
    if(n==0||n==1)      // This is a recursive function. The program will stop after this.
    //When the value will reach 0 or 1 then it will return and stop the program there.
    {
        return 1;
    }
    else {
        return factorial (n-1) * n ;
    }
}
int main()
{
     int n;
     printf("\nEnter a positive number : ");
     scanf("%d",&n);
     if(n>=0){
        printf("\n%d factorial is %d",n,factorial(n));
     }
     else{
        printf("\nEnter a positive number");
     }
return 0;
}