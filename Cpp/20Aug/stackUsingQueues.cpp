#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class Queue1{
    node *front1;
    node *rear1;
public:
    Queue1(){
        front1=NULL;
        rear1 = NULL;
    }
    void createNode(int val){
        node *n;
        n = new node;
        n->data = val;
        n->next=NULL;
        front1=n;
        rear1=n;
        
    }
    void enqueue(int val){
        if(front1==NULL || rear1 == NULL){
            createNode(val);
        }
        else{
            node *n;
            n = new node;
            n->data = val;
            rear1->next = n;
            n->next = NULL;
            rear1=n;
        }
    }
    int dequeue(){
        node *n;
        n = front1;
        front1 = front1->next;
        return n->data;
    }
    void traverse(){
        node *ptr;
        for(ptr=front1;ptr!=NULL;ptr=ptr->next){
            cout<< ptr->data<<" ";
        }
        cout<<endl;
    }
    void shift(){
        node *ptr;
        ptr=front1;
        while(ptr!=rear1){
            
        }
    }
};
int main(void){
    Queue1 q1;
    Queue1 q2;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.traverse();
    int n = q1.dequeue();
    q2.enqueue(n);
    cout<<"Queue 1 : ";
    q1.traverse();
    cout<<"Queue 2 : ";
    q2.traverse();
    return 0;
}