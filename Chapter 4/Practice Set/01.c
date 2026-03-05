#include <stdio.h>
// Multipication table
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=10;i++){
        printf("%d X %d = %d \n", n,i,n*i);
    }
    return 0;
}