#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class LinkedList{
    node *head;
public:
    void createNode(int val){
        node *n;
        n = new node;
        n->data = val;
        n->next = NULL;
        head = n;
    }
    void insert(int val){
        node *ptr;
        node *nn;
        ptr=head;
        if(head==NULL){
            createNode(val);
        }
        else{
            nn = new node;
            nn->data = val;
            nn->next = ptr;
            head = nn;
        }
    }
    void display(){
        node *ptr;
        for(ptr=head;ptr!=NULL;ptr=ptr->next){
            cout<< ptr->data<<" ";
        }
        cout<<endl;
    }
    void swap(int a,int b){
        node *curx;
        node *cury;
        node *prex;
        node *prey;
        curx = head;
        cury = head;
        prex = new node;
        prey = new node;
        for(int i=1;i<a;i++){
            curx = curx->next;
        }
        for(int i=1;i<b;i++){
            cury = cury->next;
        }
        
    }
};
int main(){

    return 0;
}