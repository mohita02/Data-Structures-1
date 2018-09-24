#include<iostream>
using namespace std;

struct node{
    char data;
    struct node *next;
};
class Stack{
    node *top;
public:
    Stack(){
        top = NULL;
    }
    void createNode(char val){
        node *n;
        n = new node;
        n->data = val;
        n->next = NULL;
        top = n;
    }
    void push(char val){
        if(top==NULL){
            createNode(val);
        }
        else{
            node *n;
            node *ptr = top;
            n = new node;
            while(ptr!=NULL){
                ptr = ptr->next;
            }
            n->data = val;
            ptr->next = n;
            n->next = NULL;
            top = n;
        }
    }
    void traverse(){
        node *cur;
        for(cur=top;cur!=NULL;cur=cur->next){
            cout<<cur->data<<" ";
        }
        cout<<endl;
    }
};
int main(void){
    Stack s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    s.push('f');
    s.push('g');
    s.push('h');
    s.traverse();
    return 0;
}