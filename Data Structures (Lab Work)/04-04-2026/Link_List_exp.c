#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_beg(struct node *start) {
    struct node *new_node;
    int num;

    printf("\nEnter the data: ");
    scanf("%d", &num);

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return start;
    }

    new_node->value = num;
    new_node->next = start;

    return new_node;
}

void printLL(struct node *p);

void freeList(struct node *head) {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct node *head = NULL;

    // build initial list
    head = insert_beg(head);
    head = insert_beg(head);
    head = insert_beg(head);

    // print list
    printLL(head);

    // free entire list safely
    freeList(head);

    return 0;
}

void printLL(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
}