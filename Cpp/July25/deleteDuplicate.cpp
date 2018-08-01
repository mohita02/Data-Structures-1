#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};
class LinkedList{
	node *head;
public:
	LinkedList(){
        head = NULL;
    }
	void createNode(int val)
	{
		node *n;
		n = new node;
		n->data = val;
		n->next = NULL;
		head = n;
	}
	void push(int val)
	{
		if(head == NULL)
			createNode(val);
		else
		{
			node *ptr;
			ptr=head;
			while(ptr->next!=NULL)
				ptr = ptr->next;
			node *newNode;
			newNode = new node;
			newNode->data = val;
			newNode->next = NULL;
			ptr->next = newNode;
		}
	}
	void pop()
	{
		node *tail,*q;
		q = head;
		while(q->next != NULL)
		{
			tail = q;
			q = q->next;
		}
		cout<<q->data<<" ";
		tail->next = NULL;
		delete(q);
		cout<<endl;
	}
	void traverse()
	{
		node *ptr;
		for(ptr = head;ptr != NULL; ptr = ptr->next)
		{
			cout<<ptr->data<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	LinkedList l;
	l.push(10);
	l.push(20);
	l.push(30);
	l.push(40);
	l.push(50);
	l.push(60);
	l.pop();
	l.pop();
	l.traverse();
	return 0;
}
