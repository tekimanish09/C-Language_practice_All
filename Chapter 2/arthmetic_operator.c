#include <stdio.h>

int main(){
    int a = 5;
    int b = 7;
    int c = a + b;
    printf( "The sum of %d and %d will be: %d \n", a,b,c);
    // The modulus version will be
    printf("And their remainder will be: %d", a%b);
    return 0;
}