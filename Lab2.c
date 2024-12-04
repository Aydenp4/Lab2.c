#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int generateRandomNumber();
void playGame();

int main() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("You have 3 chances to guess the number between 1 and 10.\n");
    
    playGame();

    return 0;
}

// Function to generate a random number between 1 and 10
int generateRandomNumber() {
    srand(time(0)); // Seed for random number generator
    return (rand() % 10) + 1;
}

// Function to manage the game logic
void playGame() {
    int randomNumber = generateRandomNumber();
    int guess, attempts = 3;

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the correct number %d!\n", randomNumber);
            return; // Exit the function if guessed correctly
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    printf("Sorry, you've used all your attempts. The correct number was %d.\n", randomNumber);
}
