#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class CircularLinkedList{
    node *head;
public:
    CircularLinkedList(){
        head = NULL;
    }
    void createList(int val){
        node *ptr;
        node *n;
        ptr = head;
        n = new node;
        if(head == NULL){
            n->data = val;
            n->next = n;
            head = n;
        }
        else{
            n->data = val;
            ptr = head;
            while(ptr->next != head){
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = head;
            head = n;
        }

    }
    void insertAtBeg(int val){
        node *ptr;
        node *n;
        ptr = head;
        n = new node;
        n->data = val;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        n->next = head;
        ptr->next = n;
        head = n;
    }
    void insertAtEnd(int val){
        node *ptr;
        node *n;
        n = new node;
        ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        n->data = val;
        n->next = head;
        ptr->next = n;
        head = n->next;
    }
    void insertMiddle(int loc, int val){
        node *ptr;
        node *n;
        n = new node;
        ptr=head;
        for(int i=1;i<loc-1;i++){
            ptr = ptr->next;
        }
        n->data = val;
        n->next = ptr->next;
        ptr->next = n;
    }
    void traverse()
    {
        struct node *ptr;
        for (ptr = head; ptr->next != head; ptr = ptr->next)
        {
            cout << ptr->data << " ";
        }
        cout<<ptr->data;
        cout << endl;
    }
};
int main(){
    CircularLinkedList cl;
    cl.createList(10);
    cl.traverse();
    cl.insertAtBeg(20);
    cl.traverse();
    cl.insertAtBeg(30);
    cl.traverse();
    cl.insertAtEnd(40);
    cl.traverse();
    cl.insertAtEnd(50);
    cl.traverse();
    cl.insertMiddle(2,80);
    cl.traverse();
}