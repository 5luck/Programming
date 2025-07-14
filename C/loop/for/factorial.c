#include <stdio.h>
int main() {
    int n, a, b = 1;
    printf("Enter the number whose factorial you want to calculate: ");
    scanf("%d", &n);
    if (n == 0 || n == 1) 
    {
        printf("%d! = 1\n", n);
    } 
    else 
    {
        for (a=1;a<=n;a++) 
        {
            b*=a;
        }
        printf("%d! = %d\n",n,b);
    }
    return 0;
}
