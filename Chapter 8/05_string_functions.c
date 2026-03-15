#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Manish";
    char bakara[30];

    printf("The length of string is --> %d", strlen(str)); // strlen(str) is for lenghth of string

    printf("\n \n");

    strcpy(bakara, str);                                  // strcpy(bakara,str) is for lenghth of string
    printf("Original= %s \n Copy= %s", str, bakara); // Checking of strcpy(bakara,str) function via bakara

    printf("\n \n");

    strcat(bakara, str);  // The first one carries both the values combined via strcat();
    printf("%s", bakara); // Verification of the previous statement

    printf("\n \n");

    int m=strcmp("deep","joke");        // DJ = Negative || JD = Postive
    printf("%d",m);
    return 0;
}