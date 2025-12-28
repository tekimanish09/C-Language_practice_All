#include <stdio.h>

int main()
{
    int value;
    printf("Enter your value: \n");
    scanf("%d", &value);
    printf("The value of value%9 is %d", value % 9);
    return 0;
}

// #include <stdio.h>

// int main(){
//     float a = 3.0;
//     int b = 1;
//     printf("%f", a+b);
//     return 0;
// }