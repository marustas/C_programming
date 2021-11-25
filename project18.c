#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100

int secret_number;
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main()
{
    char command;
    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);

    do
    {
        choose_new_secret_number();
        printf("A new number was chosen\n");
        read_guesses();
        printf("Play again?(Y/N)");
        scanf("%c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
}
//Initializes a random number generator using the time of day
void initialize_number_generator(void)
{
    srand((unsigned)time(NULL));
}
// Randomly selectrs and stores this random number between 1 and MAX_NUMBER into a secret_number
void choose_new_secret_number(void)
{
    initialize_number_generator();
    secret_number = rand() % MAX_NUMBER + 1;
}
//Repeatedly reads user's guesses and tells if the each guess is too low or too high
//or correct. When the guess is correct, prints the total number of guesses
void read_guesses(void)
{
    int guess, num_guesses = 0;
    for (;;)
    {
        ++num_guesses;
        printf("Enter the guess:");
        scanf("%d", &guess);
        if (guess == secret_number)
        {
            printf("The guess is correct.\nThe number of total guesses is %d\n", num_guesses);
            return;
        }
        else if (guess > secret_number)
        {
            printf("The guess is too high\n");
        }
        else
        {
            printf("The guess is too low\n");
        }
    }
}