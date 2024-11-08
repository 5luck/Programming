#include <stdio.h>

int main() {
    int a, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

    while (a != 0) {  // Check if a is not equal to 0
        if (a > 0) {
            sum += a;  // Add positive numbers to the sum
        }

        printf("\nEnter another number: ");
        scanf("%d", &a);  // Ask for another number in both cases
    }

    // When 0 is entered, print the total sum of positive numbers
    printf("You have stopped the program\nThe sum of positive numbers is %d", sum);

    return 0;
}
