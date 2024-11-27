#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;

    srand(time(0));
    target = (rand() % 100) + 1; 
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");

    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; 

        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", target, attempts);
        }
    } while (guess != target);

    return 0;
}