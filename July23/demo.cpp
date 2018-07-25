#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class LinkedList{
    node *head;
public:
    void inserAtBeg(int val){
        node *firstNode;
        firstNode = head;
        /*while (firstNode->next != NULL)
        {
            firstNode = firstNode->next;
        }*/
        firstNode = (struct node *)malloc(sizeof(node));
        firstNode->data=val;
        firstNode->next=head;
        head=firstNode;
    }
    void insertion(int val){
        if(head==NULL || head->data>val)
            inserAtBeg(val);
        else{
            node *fwd;
            node *prev;
            while(fwd->data<val && fwd->next!=NULL){
                prev = fwd;
                fwd = fwd->next;
            }
            node *newNode;
            newNode = new node;
            newNode->data = val;
            if(fwd->next==NULL && fwd->data<val){
                fwd->next = newNode;
                newNode->next = NULL;
            }else{
                newNode->next = fwd;
                prev->next = newNode;
            }
        }
    }
};

int main(){
    LinkedList l;
    int n,val;
    cin>>n;
   // int a[n];
    for(int i=0;i<n;i++){
        cin>>val;
        l.inserAtBeg(val);
    }
}