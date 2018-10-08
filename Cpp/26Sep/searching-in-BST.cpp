 #include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}*root;

class BST{
public:
	void search(struct Node *ptr,int num){
		if(root==NULL){
			cout<<"Tree is Empty!!"<<endl;
			return;
		}
		else if(root->data == num){
				cout<<"Element found : "<< root->data<<endl;
				return;
		}
		else{
			if(ptr->data>num){
				search(ptr->left,num);
			}
			else if(ptr->data<num){
				search(ptr->right,num);
			}
			else{
				cout<<"Element does not exisit in the tree"<<endl;
			}
		}
	}
	void insert(struct Node *ptr,int num){
		if(root==NULL){
			Node *nn = new Node;
			nn->data = num;
			nn->left = NULL;
			nn->right = NULL;
			root = nn;
		}
		else{
			if(ptr->data>num){
				if(ptr->left!=NULL){
					insert(ptr->left,num);
				}
				else{
					Node *nn = new Node;
					nn->data = num;
					nn->left = NULL;
					nn->right = NULL;
					ptr->left = nn;
					cout<<num<<" is left child of "<< ptr->data<<endl;
				}
			}
			else if(ptr->data<num){
				if(ptr->right!=NULL){
					insert(ptr->right,num);
				}
				else{
					Node *nn = new Node;
					nn->data = num;
					nn->left = NULL;
					nn->right = NULL;
					ptr->right = nn;
					cout<<num<<" is right child of "<< ptr->data<<endl;
				}
			}
		}
	}
};

int main(){
	BST bt;
	root = NULL;
	int num,n;
	cout<<"Enter size of tree : ";
	cin>>n;
	cout<<"Enter elements of the tree : "<<endl;
	for(int i=0;i<n;i++){
		cin>>num;
		bt.insert(root,num);
	}
	int s;
	cout<<"Enter the element to search : ";
	cin>>s;
	bt.search(root,s);
	return 0;
}
