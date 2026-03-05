#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guesses = 0;
    int guessed;
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed<randomNumber){
            printf("Try a higher number! \n");
        }
        else{
            printf("Try a lower number! \n");
        }
        
        no_of_guesses++;
    
    } while (guessed != randomNumber);

    printf("You gussed the number in %d guesses", no_of_guesses);

    return 0;
}