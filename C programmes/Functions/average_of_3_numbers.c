#include <stdio.h>

float average(int b, int c, int d) {
    return (float)(b + c + d) / 3; // Convert to float for correct decimal division
}

int main() {
    int b = 4, c = 75, d = 53;
    printf("Average: %.2f\n", average(b, c, d)); // Display result with 2 decimal places
    return 0;
}
