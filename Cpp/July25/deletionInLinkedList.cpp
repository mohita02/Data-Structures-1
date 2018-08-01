#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class LinkedList{
    node *head;
public:
    LinkedList(){
        head = NULL;
    }
    void createNode(int val)
    {
        node *n;
        n = (struct node *)malloc(sizeof(node));
        n->data = val;
        n->next = NULL;
        head = n;
    }
    void insertAtEnd(int val)
    {
        if (head == NULL)
            createNode(val);
        else
        {
            node *ptr;
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            node *newNode;
            newNode = (struct node *)malloc(sizeof(node));
            newNode->data = val;
            newNode->next = NULL;
            ptr->next = newNode;
        }
    }
    void deletionFromBeg(){
        node *ptr;
        ptr = head;
        head = ptr->next;
        cout<<ptr->data<<endl;
        free(ptr); // or delete(ptr)
    }
    void deleteFromEnd(){
        node *tail,*q;
        q = head;
        while(q->next!=NULL){
            tail = q;
            q=q->next;
        }
        cout<<q->data<<" ";
        tail->next=NULL;
        free(q);
        cout<<endl;
    }
    void deleteFromAnywhere(int loc){
        node *temp;
        node *q;
        temp = head;
        for(int i=0;i<loc-1;i++){
            temp = temp->next;
        }
        q=temp->next;
        temp->next = q->next;
        cout<<q->data<<endl;
        free(q);
    }
    void traverse()
    {
        struct node *ptr;
        for (ptr = head; ptr != NULL; ptr = ptr->next)
        {
            cout << ptr->data << " ";
        }
        cout << endl;
    }
};
int main(){
    LinkedList l;
    l.createNode(10);
    l.insertAtEnd(30);
    l.insertAtEnd(40);
    l.insertAtEnd(50);
    l.insertAtEnd(60);
    l.traverse();
    l.deleteFromAnywhere(3);
    l.traverse();
    l.deletionFromBeg();
    l.traverse();
    l.deleteFromEnd();
    l.traverse();
    return 0;
}