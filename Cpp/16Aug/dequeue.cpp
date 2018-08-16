#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class Dequeue{
    node *front;
    node *rear;
public:
    Dequeue();
    void createNode(int val);
    void insertAtBeg(int val);
    void deleteAtBeg();
    void insertAtEnd(int val);
    void deleteAtEnd();
    void traverse();
};
Dequeue::Dequeue(){
    front = NULL;
    rear = NULL;
}
void Dequeue::createNode(int val){
    node *ptr;
    ptr = new node;
    ptr->data=val;
}
void Dequeue::insertAtBeg(int val){

}
int main(void){
    return 0;
}