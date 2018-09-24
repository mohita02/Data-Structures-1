#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printList(struct node *n);

int main(void){
    // Simple linked list with 3 nodes
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // Allocate 3 nodes in the heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Three Blocks have been created dynamically 
    // We have pointers to these three blocks as first, second and third.
    // Data stored is random as we have not assigned anything yet.

    head->data = 1; // Assign data to head pointer
    head->next = second; // Link first node to second node.

    // Now head has data 1 and is linked/ pointing to the second
    // Assigning data to second pointer and linking it to the third

    second->data = 2;
    second->next = third;

    // Repeat same steps for third pointer
    third->data = 3;
    
    // Since we do not have any further pointer,
    // we will assign the next of this pointer to NULL
    third->next = NULL;

    // Printing the linked list
    printList(head);
    return 0;                                                  
}

void printList(struct node *n){
    while(n!=NULL){
        printf("%d ",n->data);
        n = n->next;
    }
    printf("\n");
}