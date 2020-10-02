#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

void travarse_circular_linked_list(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("Element is : %d \n", p->data);
        p = p->next;
    } while (p != head);
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    //allocates memory on heap//
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // allocate data to linked list
    head->data = 7;
    head->next = second; //connect 1st and 2nd linked list
    //allocate to second
    second->data = 98;
    second->next = third; //connect second to third
    // allocate data to fourth
    third->data = 25;
    third->next = fourth; //linked to fourth
                          // allocate data to third
    fourth->data = 100;
    fourth->next = head; //make linked list circualr

    travarse_circular_linked_list(head);

    return 0;
}