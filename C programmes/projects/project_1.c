#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seed the random number generator
    srand(time(NULL));
    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int guess, tries = 5;
    // Loop for up to 5 tries
    while (tries > 0) {
        printf("\nGuess the number: ");
        scanf("%d", &guess);
        if (random_number == guess) {
            printf("\nCongratulations! You guessed the correct number.\n");
            break;
        } else if (guess < random_number) {
            printf("Higher\n");
        } else {
            printf("Lower\n");
        }
        tries--;
        printf("You have %d tries left.\n", tries);
    }
    if (tries == 0) {
        printf("\nSorry! You've used all your tries. The number was %d.\n", random_number);
    }
    return 0;
}