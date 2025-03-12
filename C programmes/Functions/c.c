#include <stdio.h>

int main() {
    int n = 3; // Number of rows in the triangle

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Print spaces to align the stars
        }
        
        for (int k = 1; k <= i; k++) {
            printf("* "); // Print the left side stars
        }
        for (int l = 1; l < i; l++) {
            printf("* "); // Print the right side stars
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
