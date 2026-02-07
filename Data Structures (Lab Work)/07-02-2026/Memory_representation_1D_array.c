#include <stdio.h>

int main() {
    int val, i;
    printf("Enter your value: \n");
    scanf("%d", &val);

    int a[val];
    for (i = 0; i < val; i++) {
        a[i] = i * 10;
    }
    printf("Element \t Value \t Address \n");
    for (i = 0; i < val; i++) {
        printf("Manish[%d] \t %d \t %p \n", i, a[i], (void*)&a[i]);
    }

    return 0;
}
