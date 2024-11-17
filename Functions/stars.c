#include <stdio.h>
int star(int n);

int star(int n) {
    int total_stars = 0;  // To count total stars
    for(int i = 1; i <= n; i++)
    {
       for(int j = 1; j <= (2*i-1); j++)
        {
            printf("*");
            total_stars++;  // Count each star
        }
        printf("\n");
    }
    return total_stars;  // Return total number of stars
}

int main()
{
    int n;
    printf("How many rows you want to print : ");
    scanf("%d", &n);
    int total = star(n);
    printf("Total stars printed: %d\n", total);
    return 0;
}