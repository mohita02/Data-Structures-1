#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class linekdList
{
    node *head;

  public:
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
    void insertAnywhere(int val, int loc)
    {
        if (head == NULL)
            createNode(val);
        else
        {
            node *ptr;
            ptr = head;
            for (int i = 1; i < loc-1; i++)
            {
                ptr = ptr->next;
            }
            node *newNode;
            newNode = (struct node *)malloc(sizeof(node));
            newNode->data = val;
            newNode->next = ptr->next;
            ptr->next = newNode;
        }
    }
    void countList(){
        struct node *ptr;
        int count=0;
        for (ptr = head; ptr != NULL; ptr = ptr->next)
        {
            count++;
        }
        cout<<"There are "<<count<<" links."<<endl;
    }
    void printNode(int loc){
        node *ptr;
        ptr = head;
        for (int i = 1; i<= loc-1; i++)
        {
            ptr = ptr->next;
        }
        cout<<ptr->data<<endl;
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

int main()
{
    linekdList l;
    l.createNode(10);
    l.insertAtEnd(30);
    l.insertAtEnd(40);
    l.insertAtEnd(50);
    l.insertAtEnd(60);
    l.insertAnywhere(20, 2);
    l.countList();
    l.traverse();
    int n;
    cout<<"Enter the node number: ";
    cin>>n;
    l.printNode(n);
}