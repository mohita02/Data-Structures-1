#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class linkedList{
    node *head;
public:
    void createNode(int val){
        node *n;
        n = new node;
        n->data = val;
        n->next = NULL;
        head = n;
    }
    void insertElement(int val){
        if(head==NULL)
            createNode(val);
        else{
            node *ptr;
            ptr = head;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            node *newNode;
            newNode = new node;
            newNode->data = val;
            newNode->next = NULL;
            ptr->next = newNode;

        }
    }
    void insert(int val){
        node *ptr;
        ptr = head;
        while(ptr->data>val){
            ptr = ptr->next;
        }
        node *newNode;
        newNode = new node;
        newNode->data = val;
        newNode->next = ptr->next;
        ptr->next = newNode;
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
    linkedList l;
    int n;
    cout<<"Enter the number of node: ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        l.insertElement(a);
    }
    int add;
    cout<<"Enter the element to add: ";
    cin>>add;
    l.insert(add);
    l.traverse();
}