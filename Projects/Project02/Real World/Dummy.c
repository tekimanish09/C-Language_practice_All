#include <stdio.h>
#include <time.h>
#include <windows.h>

void delay(int seconds)
{
    time_t start = time(NULL);
    while (time(NULL) < start + seconds);
}

int main()
{
    SetConsoleOutputCP(65001);
    int secret = 6587;
    int max_attempts = 3;
    int attempts = 0;
    int guess;

    printf("==== LOGIC SYSTEM ENTRANCE ====\n");

    printf(
"⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣷⣶⣄⡀⠀⠀⠀⠀⠀⠀⣠⣤⣶⣿⣿⣿⣿⣿⣿⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
"⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
"⠀⠀⠀⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
"⣠⣤⣤⣤⣤⣤⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
"⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
"\nHappy Goku Day!\n"
"In loving memory of Akira Toriyama\n"
    );

    while (attempts < max_attempts)
    {
        printf("Enter the password: ");

        if (scanf("%d", &guess) != 1)
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (guess == secret)
        {
            printf("Access granted\n");
            return 0;
        }
        else
        {
            attempts++;
            printf("Wrong Password!!\n\tTry Again\n\tCurrent attempt= %d\n\tAttempts left= %d\n\n",
                   attempts, max_attempts - attempts);

            delay(1);
        }
    }

    printf("Account Locked Baby!\n");
    return 0;
}