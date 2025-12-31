#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Asking for user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Loop to check for divisors from 2 up to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // Found a divisor, so it's not prime
            break;       // Exit the loop early
        }
    }

    // Output the result based on the isPrime flag
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}