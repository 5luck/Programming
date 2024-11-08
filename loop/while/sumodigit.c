#include <stdio.h>

int main() {
    int sum, a, b;

    // Infinite loop until a non-positive number is entered
    while (1) {
        sum = 0;  // Reset sum for each new number
        printf("Enter a number (enter 0 or negative to stop): ");
        scanf("%d", &a);

        if (a <= 0) {
            // Break the loop if a non-positive number is entered
            printf("You entered a non-positive number. Exiting.\n");
            break;
        }

        // Calculate the sum of digits of the entered number
        while (a > 0) {
            b = a % 10;  // Get the last digit
            sum += b;    // Add the digit to sum
            a = a / 10;  // Remove the last digit
        }

        // Print the sum of the digits
        printf("The sum of the digits is: %d\n", sum);
    }

    return 0;
}
