#include<iostream>
using namespace std;
struct node{
    node *next;
    int data;
};
class stacklink{
    node *top;
public:
    stacklink()
    {
        top=NULL;
    }
    void create_node(int val)
    {
        node *newnode;
        newnode=new node();
        newnode->data=val;
        newnode->next=NULL;
        
    }
    void insert_beg(int val)
    {
        if(top==NULL)
        {
            create_node(val);
        }
        node *newnode;
        newnode=new node();
        newnode->data=val;
        newnode->next=top;
        top=newnode;    
    }
    void delete_beg()
    {
        node *temp;
        temp=top;
        top=top->next;
        delete(temp);
    }
    void traverse()
    {
        node *cur;
        for(cur=top;cur!=NULL;cur=cur->next)
        {
            cout<<cur->data<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    stacklink s;
    s.insert_beg(10);
    s.insert_beg(20);
    s.insert_beg(30);
    s.traverse();
    s.delete_beg();
    s.traverse();
}
