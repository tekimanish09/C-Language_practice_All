#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\n Enter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->value = num;
    new_node->next = start;
    start = new_node;
    return start;
};

void printLL(struct node *p);

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // check allocation (stop pretending malloc always works)
    if (one == NULL || two == NULL || three == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // link nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // set head
    head = one;

    // print list
    printLL(head);

    // free memory (you ignored this completely)
    free(one);
    free(two);
    free(three);

    return 0;
}

void printLL(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->value);
        p = p->next;
    }
}
