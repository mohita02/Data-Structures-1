#include<iostream>
using namespace std;

struct node{
    int num;
    struct node *next;
};

class Queue{
    node *front;
    node *rear;
public:
    Queue(){
        rear = NULL;
        front = NULL;
    }
    void createNode(int val){
        node *n;
        n = new node;
        n->num = val;
        front = n;
        rear = n;
        n->next = NULL;
    }
    void enqueue(int val){
        if(front==NULL || rear==NULL){
            createNode(val);
        }
        else{
            node *n;
            node *ptr;
            ptr = front;
            n = new node;
            n->num = val;
            rear->next = n;
            n->next = NULL;
            rear = n;
        }
    }
    void dequeue(){
        node *n;
        n = front;
        front = front->next;
        delete(n);
    }
    void display(){
        node *ptr;
        for(ptr=front;ptr!=NULL;ptr=ptr->next){
            cout<<ptr->num<<" ";
        }
        cout<<endl;
    }
};

int main(void){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}