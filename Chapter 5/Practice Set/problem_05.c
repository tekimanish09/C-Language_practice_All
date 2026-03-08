#include <stdio.h>
int sum_natural(int);
int sum_natural(int m){
    if(m==1){
        return 1;
    }
    return sum_natural(m-1)+m;
}

int main(){
    int num;
    printf("Enter the 'nth' term: ");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers is %d",num,sum_natural(num));
    return 0;
}