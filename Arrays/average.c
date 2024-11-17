#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold n numbers
    float numbers[n];

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];  // Add the number to sum
    }

    // Calculate the average
    average = sum / n;

    // Output the average
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
