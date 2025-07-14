#include <stdio.h>

// Function to swap two integers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Prompt user for input
    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);

    // Swap the values
    swap(&a, &b);

    // Display the swapped values
    printf("The swapped value of a is %d & b is %d\n", a, b);

    return 0;
}