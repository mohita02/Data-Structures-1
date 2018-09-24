#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class Queue{
    node *front;
    node *rear;
    int a[6];
public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void createNode(int val){
        node *newNode;
        newNode = new node;
        newNode->data = val;
        newNode->next = NULL;
        rear = newNode;
        front = newNode;
    }
    void enqueue(int val){
        if(front==NULL || rear==NULL){
            createNode(val);
        }
        else{
            node *newNode;
            node *ptr = rear;
            newNode = new node;
            newNode->data = val;
            ptr->next = newNode;
            newNode->next = NULL;
            rear = newNode;
        }
    }
    int dequeue(){
        node *n = front;
        front = front->next;
        return n->data;
    }
    void traverse(){
        node *ptr;
        for(ptr=front;ptr!=NULL;ptr=ptr->next){
            cout<<ptr->data<<" ";
        }
        cout<<endl;
    }
    void stack(){
        node *ptr;
        int i;
        for(i=0,ptr=front;i<6,ptr!=NULL;i++,ptr=ptr->next){
            a[i] = ptr->data;
        }
    }
    void stackPrint(){
        for(int i=5;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
};

int main(){
    Queue q;
    Queue q1;

    q.enqueue(9);
    q.enqueue(1);
    q.enqueue(0);
    q.enqueue(6);
    q.enqueue(4);
    q.enqueue(2);
    for(int i=0;i<6;i++){
        q1.enqueue(q.dequeue());
        q.traverse();
    }
    cout<<"Newly formed queue : "; 
    q1.traverse();
    q1.stack();
    cout<<"Newly formed stack : ";
    q1.stackPrint();


}