#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printList(struct node*);
void pushFront(struct node** head_ref,int new_data);
void pushin(struct node* prev_node,int new_data);
void append(struct node** head_ref,int new_data);

int main(void){
    struct node* head = NULL;
    //append(&head,6);
    pushFront(&head,4);
    pushFront(&head,8);
    pushin(head->next,5);
    append(&head,7);
    printList(head);
    return 0;
}

void pushFront(struct node** head_ref,int new_data){
    struct node* new_Node = (struct node*)malloc(sizeof(struct node));
    new_Node->data = new_data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void pushin(struct node* prev_node,int new_data){
    if(prev_node == NULL){
        printf("Given node cannot be NULL !\n");
        return;
    }
    struct node* new_Node = (struct node*)malloc(sizeof(struct node));
    new_Node->data = new_data;
    new_Node->next = prev_node->next;
    prev_node->next = new_Node; 
}
void append(struct node** head_ref,int new_data){
    struct node* new_Node = (struct node*)malloc(sizeof(struct node));
    struct node* last = (*head_ref);

    new_Node->data = new_data;
    new_Node->next = NULL;

    while(last->next!=NULL){
        last = last->next;
    }
    last->next = new_Node;
}
void printList(struct node *n){
    while(n!=NULL){
        printf("%d ",n->data);
        n = n->next;
    }
    printf("\n");
}
