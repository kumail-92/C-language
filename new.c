#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    // The secret word (you can change this)
    char secret[] = "HANGMANA";
    int length = strlen(secret);
    char display[20] = {0}; // Will store * for unknown letters
    int attempts = 6;
    char guess;
    bool won = false;

    // Initialize display with asterisks
    for (int i = 0; i < length; i++) {
        display[i] = '*';
    }
    display[length] = '\0'; // Null-terminate

    printf("Welcome to Hangman!\n");
    printf("Word: %s\n", display);
    printf("Attempts left: %d\n", attempts);

    while (attempts > 0 && !won) {
        printf("Guess a letter: ");
        scanf(" %c", &guess);
        guess = toupper(guess); // Make it uppercase

        // Check if already guessed
        bool alreadyGuessed = false;
        for (int i = 0; i < length; i++) {
            if (display[i] == guess) {
                alreadyGuessed = true;
                break;
            }
        }

        if (alreadyGuessed) {
            printf("You already guessed that!\n");
            continue;
        }

        // Check if correct
        bool correct = false;
        for (int i = 0; i < length; i++) {
            if (secret[i] == guess) {
                display[i] = guess;
                correct = true;
            }
        }

        if (correct) {
            printf("Correct!\n");
        } else {
            attempts--;
            printf("Wrong! Attempts left: %d\n", attempts);
        }

        printf("Word: %s\n", display);

        // Check if won
        won = true;
        for (int i = 0; i < length; i++) {
            if (display[i] == '*') {
                won = false;
                break;
            }
        }
    }

    if (won) {
        printf("You won! The word was: %s\n", secret);
    } else {
        printf("Game over! The word was: %s\n", secret);
    }

    return 0;
}