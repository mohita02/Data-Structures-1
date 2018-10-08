#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}*root;

class BST{
public:
	void insert(struct Node *ptr,int num){
		if(root==NULL){
			Node *nn;
			nn = new Node;
			nn->data = num;
			nn->left = NULL;
			nn->right = NULL;
			root = nn;
			cout<<"Root Node Created"<<endl;
		}
		else{
			if(ptr->data > num){
				if(ptr->left != NULL){
					insert(ptr->left,num);
				}
				else{
					Node *nn;
					nn = new Node;
					nn->left = NULL;
					nn->right = NULL;
					ptr->left = nn;
					cout<<num<<" is left child of "<< ptr->data<<endl;
				}
			}
			else if(ptr->data < num){
				if(ptr->right != NULL){
					insert(ptr->right,num);
				}
				else{
					Node *nn;
					nn = new Node;
					nn->left = NULL;
					nn->right = NULL;
					root->right = nn;
					cout<<num<<" is right child of "<< ptr->data<<endl;
				}
			}
		}
	}
	void inOrder(struct Node *ptr){
		if(root==NULL){
			return;
		}
		else{
			inOrder(root->left);
			cout<< root->data<<" ";
			inOrder(root->right);
		}
	}
};

int main(void){
	BST bt;
	root = NULL;
	int n;
	int num;
	cout<<"Enter size of BST : ";
	cin>>num;
	cout<<"Enter the elements : "<<endl;
	for(int i=0;i<num;i++){
		cin>>n;
		bt.insert(root,n);
	}
//	bt.inOrder(ptr);
}
