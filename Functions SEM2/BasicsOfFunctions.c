#include <stdio.h>
void expp(){
    printf("Hellow Buddy !! \n \n");
    return;
}
#include <stdio.h>

int main(){
    int i=0;
    printf("Number of time:%d \n", i++);
    expp();
    printf("Number of time:%d \n", i++);
    expp();
    printf("Number of time:%d \n", i++);
    expp();
    printf("Number of time:%d \n", i++);
    expp();
    return 0;
}
