#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *prev;
	struct node *next;
};
class DoublyLinkedList{
	node *head;
public:
	DoublyLinkedList(){
		head = NULL;
	}
	void createNode(int val){
		node *n;
		n = new node;
		n->data = val;
		n->prev = NULL;
		n->next = NULL;
		head = n;
	}
	void insertAtBeg(int val){
		node *ptr;
		node *nn;
		if(head==NULL){
			createNode(val);
		}
		else{
			ptr = head;
			nn = new node;
			nn->data = val;
			nn->prev = NULL;
			nn->next = ptr;
			ptr->prev = nn->next;
			head = nn;
		}
	}
	void insertAtEnd(int val){
		node *ptr;
		node *nn;
		if(head==NULL){
			createNode(val);
		}
		else{
			ptr=head;
			while(ptr->next!=NULL){
				ptr = ptr->next;
			}
			nn = new node;
			nn->data=val;
			nn->next = NULL;
			ptr->next = nn;
			nn->prev = ptr;
		}
	}
	void insertInBetween(int val,int loc){
		node *ptr;
		node *nn;
		node *q;
		if(head==NULL){
			createNode(val);
		}
		else{
			ptr=head;
			for(int i=1;i<loc;i++)
			{
				ptr=ptr->next;
			}
			nn = new node;
			nn->data = val;
			nn->next = ptr->next;
			ptr->next =  nn;
			nn->prev = ptr;
			ptr->next->prev = nn;
		}
	}
	void search(int val){
		node *ptr;
		node *n;
		if(head==NULL){
			cout<<"The List is empty !"<<endl;
		}
		else{
			ptr=head;
			n=new node;
			n->data = val;
			int i=1;
			while(1){
				if(n->data == ptr->data){
					cout<<"Element found at location "<<i<<endl;
					break;
				}
				else{
					ptr = ptr->next;
					i++;
				}
			}
		}
	}
	void deleteAtBeg(){
		node *ptr;
		node *temp;
		node *n;
		if(head==NULL)
			cout<<"List is Empty!"<<endl;
		else{
			ptr=head;
			temp = new node;
			temp=ptr->next;
			delete(ptr);
			head = temp;
		}
	}
	void traverse(){
		node *ptr;
		for(ptr=head;ptr!=NULL;ptr=ptr->next){
			cout<< ptr->data<<" ";
		}
		cout<<endl;
	}
};
int main(){
	DoublyLinkedList dll;
	dll.insertAtBeg(10);
	dll.traverse();
	dll.insertAtBeg(20);
	dll.traverse();
	dll.insertAtBeg(30);
	dll.traverse();
	dll.insertAtBeg(40);
	dll.traverse();
	dll.insertAtEnd(50);
	dll.traverse();
	dll.insertAtEnd(60);
	dll.traverse();
	dll.insertAtEnd(70);
	dll.traverse();
	dll.insertAtEnd(80);
	dll.traverse();
	dll.insertInBetween(13,4);
	dll.traverse();
	dll.search(13);
	dll.traverse();
	dll.deleteAtBeg();
	dll.traverse();
	return 0;
}
