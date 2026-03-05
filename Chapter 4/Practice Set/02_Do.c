#include <stdio.h>

int main(){
    int n=1, sum=0;
    do{
        sum+=n;
        printf("The sum is %d \n", sum);
        n++;
    }while(n<=10);
    return 0;
}