#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class linkedList{
    node *head;
public:
    linkedList(){
        head = NULL;
    }
    void createNode(int val){
        node *n;
        n = (struct node *)malloc(sizeof(node));
        n->data=val;
        n->next=NULL;
        head=n; 
    }
    void insertNodeAtBeg(int val){
        if(head==NULL){
            createNode(val);
        }
        else{
            node *firstNode;
            firstNode = head;
            while (firstNode->next != NULL)
            {
                firstNode = firstNode->next;
            }
            firstNode = (struct node *)malloc(sizeof(node));
            firstNode->data=val;
            firstNode->next=head;
            head=firstNode;
        }
    }
    void traverse(){
        struct node *ptr;
        for(ptr=head;ptr!=NULL;ptr=ptr->next){
            cout<<ptr->data<<" ";
        }
        cout<<endl;
    }
};

int main(){
    linkedList l;
    l.createNode(50);
    l.traverse();
    l.insertNodeAtBeg(60);
    l.insertNodeAtBeg(70);
    l.insertNodeAtBeg(80);
    l.insertNodeAtBeg(90);
    l.traverse();
    return 0;
}