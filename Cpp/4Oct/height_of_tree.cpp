#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}*root;

class Tree{
public:
	void insertNode(struct Node *ptr,int val){
		if(root == NULL){
			Node *newNode;
			newNode = new Node;
			newNode->data = val;
			newNode->left = NULL;
			newNode->right = NULL;
		}
		else if(ptr->data > val){
			if(ptr->left == NULL){
				insertNode(ptr->left,val);
			}
			else{
				Node *newNode;
				newNode = new Node;
				newNode->data = val;
				ptr->left = newNode;
				newNode->left = NULL;
				newNode->right = NULL;
				cout<<val<<" is the left child of "<< ptr->data<<endl;
			}
		}
		else if(ptr->data < val){
			if(ptr->right == NULL){
				insertNode(ptr->right,val);
			}
			else{
				Node *newNode;
				newNode = new Node;
				newNode->data = val;
				ptr->right = newNode;
				newNode->left = NULL;
				newNode->right = NULL;
				cout<<val<<" is right child of "<< ptr->data<<endl;
			}
		}
	}
	int findHeight(struct Node *ptr){
		if(ptr == NULL){
			return 1;
		}
		else{
			int lh,rh;
			lh = findHeight(ptr->left);
			rh = findHeight(ptr->right);
			if(lh > rh){
				return lh+1;
			}
			else{
				return rh+1;
			}
		}
	}
};
int main(void){
	root = NULL;
	Tree t;
	int len,num;
	cout<<"Enter the size of tree: ";
	cin>>len;
	cout<<"Enter the elements of the tree : "<<endl;
	for(int i=0;i<len;i++){
		cin>>num;
		t.insertNode(root,num);
	}
	int height = t.findHeight(root);
	cout<<"Height of tree : "<<height<<endl;
	return 0;
}
