#include <stdio.h>

int main()
{
    int hel[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter hel[%d]: ", i);
        if (scanf("%d", &hel[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;  // Exit the program if input is invalid
        }
    }

    printf("%d\t%d\n", hel[0], hel[1]);

    return 0;
}
