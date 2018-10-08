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
		Node *pre;
		if(root==NULL){
			Node *nn = new Node;
			nn->data = num;
			nn->left = NULL;
			nn->right = NULL;
			root  = nn;
			cout<<"Root node created"<<endl;
		}
		else{
			while(ptr!=NULL){
				pre = ptr;
				if(ptr->data > num){
					ptr=ptr->left;
				}
				else{
					ptr=ptr->right;
				}
			}
			if(pre->data>num){
				Node *nn = new Node;
				nn->data = num;
				nn->left = NULL;
				nn->right = NULL;
				pre->left = nn;
				cout<<num<<" is left child of "<< pre->data<<endl;
			}
			else{
				Node *nn = new Node;
				nn->data = num;
				nn->left = NULL;
				nn->right = NULL;
				pre->right = nn;
				cout<<num<<" is right child of " << pre->data<<endl;
			}
		}
	}
};

int main(){
	BST bt;
	root = NULL;
	int num;
	int n;
 	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		bt.insert(root,num);
	}
	return 0;
}
