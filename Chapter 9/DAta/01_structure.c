#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[50];
};

int main()
{
    struct employee e1, e2;
    e1.code = 101;
    strcpy(e1.name, "Teki Manish");
    e1.salary = 56000;

    e2.code = 102;
    strcpy(e2.name, "Teki Arshit");
    e2.salary = 75000;

    // for (int i = 1; i < 3; i++)
    // {
    //     printf("The employee id is: %d \n"
    //            "The employee name is: %s \n"
    //            "The employee salary is: %.2f \n",
    //         ei.code,ei.name,ei.salary);
    // }

// loop failed because ei is not a valid variable in C. You cannot invent e1, e2, e3 dynamically like that and expect the compiler to understand it. The key correction is this: 1)e[i] works, 2) ei does not.

    printf("The employee id is: %d \n"
               "The employee name is: %s \n"
               "The employee salary is: %.2f \n\n",
            e1.code,e1.name,e1.salary);

    printf("The employee id is: %d \n"
               "The employee name is: %s \n"
               "The employee salary is: %.2f \n\n",
            e2.code,e2.name,e2.salary);

    return 0;
}