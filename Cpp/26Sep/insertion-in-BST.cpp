#include<iostream>
using namespace std;

struct node{
	int info;
	struct node *left;
	struct node *right;
}*root;

class BST{
public:
	void insert(struct node *ptr,int num){
		if(root==NULL)
		{
			node *n;
			n = new node;
			n->info = num;
			n->left = NULL;
			n->right = NULL;
			root = n;
			cout<<"Root node created"<<endl;
		}
		else
		{
			if(ptr->info>num)
			{
				if(ptr->left!=NULL)
				{
					insert(ptr->left,num);
				}
				else
				{
					node *n;
					n = new node;
					n->info = num;
					n->left = NULL;
					n->right = NULL;
					ptr->left = n;
					cout<<num<<" left child of "<< ptr->info<<endl;
				}
			}
			else if(ptr->info<num)
			{
				if(ptr->right != NULL)
				{
					insert(ptr->right,num);
				}
				else
				{
					node *n;
					n = new node;
					n->info = num;
					n->right = NULL;
					n->left = NULL;
					ptr->right = n;
					cout<<num<<" right child of "<< ptr->info<<endl;
				}
			}
		}
	}
};

int main()
{
	BST bt;
	root = NULL;
	int num;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		bt.insert(root,num);
	}
	return 0;
}
