#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int no_of_gusses=0;
    int gussed;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do{
        printf("Guess the number: ");
        scanf("%d",&gussed);
        if(gussed<randomNumber){
            printf("Try a higher number! \n");
        }
        else{
            printf("Try a lower number! \n");

        }
        no_of_gusses++;


    }while(gussed!=randomNumber);
    printf("You gussed the number in %d times",no_of_gusses);
    return 0;
}