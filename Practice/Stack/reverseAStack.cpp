#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class Stack{
    struct node *top;
public:
    Stack(){
        top=NULL;
    }
    void push(int val){
        if(top == NULL){
            struct node *newNode = (struct node *)malloc(sizeof(;
            ->data = val;
            ->next = NULL;
        }
        else{
            struct node *newNode  = (struct node*)malloc(sizeof(struct node));
            newNode->data = val;
            newNode->next = NULL;
            top->next = newNode;
            top = newNode;
        }
    }
    void pop(struct node *top){
        struct node *newNode = top;
        cout<<" Deleting "<< newNode->data<<endl;;
        top = top->next;
        free(newNode);
    }
    void printStack(struct node *top){
        struct node *ptr = top;
        for(ptr=top;ptr!=NULL;ptr=ptr->next){
            cout<<ptr->data<<" ";
        }
        cout<<endl;
    }

};
int main(void){
    Stack s;
    struct node *top = NULL;
    s.push(top,10);
    // s.push(top,20);
    // s.push(top,30);
    // s.push(top,40);
    // s.push(top,50);
    s.printStack(top);
}