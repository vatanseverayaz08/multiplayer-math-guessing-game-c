/*
Two Players Number Guessing Game
--------------------------------
- Each guess requires solving a multiplication question.
- Each player tries to find their number faster than their opponent.
- Numbers are between 1 and 100.
- Type -1 to quit.

Author: Ayaz Vatansever
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int number1, number2, guess1 = 0, guess2 = 0;
    int tries1 = 0, tries2 = 0;
    int answer;

    // Generate random numbers between 1 and 100 for Player 1 and Player 2   
    srand(time(NULL));
    number1 = rand() % 100 + 1;
    number2 = rand() % 100 + 1;

    printf("Two players number guessing game!\n");
    printf("Each guess requires answering a multiplication question\n");
    printf("Numbers are between 1 and 100\n");
    printf("Type -1 to quit.\n\n");

    while (1)
    {
        printf("Player 1 turn:\n");
        // Generate a random number between 1 and 100 for calculation
        int a = rand() % 100 + 1;
        // Generate a random number between 1 and 10 for calculation
        int b = rand() % 10 + 1;

        printf("Solve: %d x %d = ? : ", a, b);
        scanf("%d", &answer);
        
        if (answer == a * b) 
        {
            printf("Correct! Enter your guess: ");
            scanf("%d", &guess1);

            if (guess1 == -1)
                break;

            if (guess1 < 1 || guess1 > 100)
            {
                printf("Guess must be between 1 and 100\n\n");
            }
            else // Continue only if the player does not quit and enters a valid number
            {
                tries1++;
                if (guess1 < number1)
                    printf("Try a bigger number!\n\n");
                else if (guess1 > number1)
                    printf("Try a smaller number!\n\n");
                else
                {
                    printf("Player 1 found the number in %d tries!\n", tries1);
                    break;
                }
            }
        }
        else
        {
            printf("Wrong answer! No guess this turn.\n\n");
        }

        printf("Player 2 turn:\n");
        // Generate a random number between 1 and 100 for calculation
        a = rand() % 100 + 1;
        // Generate a random number between 1 and 10 for calculation
        b = rand() % 10 + 1;

        printf("Solve: %d x %d = ? : ", a, b);
        scanf("%d", &answer);

        if (answer == a * b)
        {
            printf("Correct! Enter your guess: ");
            scanf("%d", &guess2);

            if (guess2 == -1)
                break;

            if (guess2 < 1 || guess2 > 100) 
            {
                printf("Guess must be between 1 and 100\n\n");
            }
            else // Continue only if the player does not quit and enters a valid number
            {
                tries2++;
                if (guess2 < number2)
                    printf("Try a bigger number!\n\n");
                else if (guess2 > number2)
                    printf("Try a smaller number!\n\n");
                else
                {
                    printf("Player 2 found the number in %d tries!\n", tries2);
                    break;
                }
            }
        }
        else
        {
            printf("Wrong answer! No guess this turn.\n\n");
        }
    }
// Check which player guessed their number correctly first
    if ((guess1 == number1) && (guess2 == number2))
    {
        if (tries1 < tries2)
            printf("Player 1 wins!\n");
        else if (tries2 < tries1)
            printf("Player 2 wins!\n");
        else
            printf("It's a tie!\n");
    }
    else if (guess1 == number1)
        printf("Player 1 wins!\n");
    else if (guess2 == number2)
        printf("Player 2 wins!\n");
    else
        printf("Game over Player1's number was %d, Player2's number was %d", number1, number2);

    return 0;
}
