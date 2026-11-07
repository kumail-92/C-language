#include <stdio.h>

// Global Variables...
char word[10] = "AUSTRALIA";
int guessed[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
char guess;
int i, win = 0, attempts = 10, count = 0, already = 0, found = 0;

int main()
{
    while (attempts > 0 && win == 0)
    {
        count = 0;
        found = 0;
        already = 0;
        printf("\n\nGuess Letter: "); // A
        scanf(" %c", &guess);

        for (i = 0; word[i] != '\0'; i++)
        {
            if (guess == word[i] && guessed[i] == 1)
            {
                already = 1;
            }
            if (guess == word[i])
            {
                guessed[i] = 1;
                found = 1;
            }
        }

        if (already == 1)
        {
            printf("\nYou have already guessed it!\n\n");
        }
        else if(found == 0)
        {
            printf("Wrong!");
            attempts-- ;
        }

        for (i = 0; i <= 8; i++)
        {
            if (guessed[i] == 0)
            {
                printf(" *");
            }
            else
            {
                printf(" %c", word[i]);
            }
        }

        for (i = 0; i <= 8; i++)
        {
            if (guessed[i] == 1)
            {
                count++;
            }
        }

        if (count == 9)
        {
            printf("\n\nYou won! The word was: %s\n", word);
            win = 1;
        }

        printf("\nAttempts left = %d", attempts);
    }

    if (attempts == 0 &&  win == 0)
    {
        printf("\n\nGame over! The word was: %s\n", word);
    }

    return 0;
}