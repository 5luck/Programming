#include <stdio.h>

int main()
{
    int hel[2];
    printf("Enter hel[0]: ");
    scanf("%d", &hel[0]);  // Use & to get the address of hel[0]

    printf("Enter hel[1]: ");
    scanf("%d", &hel[1]);  // Use & to get the address of hel[1]

    printf("%d\t%d\n", hel[0], hel[1]);

    return 0;
}
