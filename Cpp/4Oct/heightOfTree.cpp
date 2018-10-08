#include<iostream>
using namespace std;

struct node{
	node *left;
	int data;
	node *right;
}*root;

class height_of_tree
{
public:
	void insert(struct node *ptr,int num)
	{
		if(root==NULL)
		{
			node *newnode;
			newnode=new node;
			newnode->data=num;
			newnode->left=NULL;
			newnode->right=NULL;
			root=newnode;
		}
		else if(ptr->data > num)
		{
			if(ptr->left!=NULL)
				insert(ptr->left,num);
			else{
				node *newnode;
				newnode=new node;
				newnode->left=NULL;
				newnode->right=NULL;
				newnode->data=num;
				ptr->left=newnode;
				cout<<"left child of "<<ptr->data<<endl;
			}
		}
		else if(ptr->data < num)
		{
			if(ptr->right!=NULL)
				insert(ptr->right,num);
			else{
				node *newnode;
				newnode=new node;
				newnode->data=num;
				newnode->left=NULL;
				newnode->right=NULL;
				ptr->right=newnode;
				cout<<"right child of "<<ptr->data<<endl;
			}
		}
	}
	void inorder_trav(struct node *root)
	{
		if(root==NULL)
		{

		}
		else{
			inorder_trav(root->left);
			cout<<root->data<<"\t";
			inorder_trav(root->right);
		}
	}
	int height_tree(struct node *temp)
	{
		if(temp==NULL)
		{
			return -1;
		}
		else{
			int lh,rh;
			lh=height_tree(temp->left);
			rh=height_tree(temp->right);
			if(lh>rh)
			{
				return lh+1;
			}
			else{
				return rh+1;
			}
		}
	}
	int smallest(struct node *node)
	{
		int small;
		struct node *cur=node;
		while(cur->left!=NULL)
		{
			cur=cur->left;
		}
		small=cur->data;
		return small;
	}
	int greatest(struct node *temp)
	{
		int great;
		struct node *cur=temp;
		while(cur->right!=NULL)
		{
			cur=cur->right;
		}
		great=cur->data;
		return great;
	}
	int total_number(struct node *temp)
	{
		struct node *node=temp;
		struct node *cur;
		struct node *ptr;
		int total=0;
		int l=0,r=0;
		if(root==NULL)
		{
			return 0;
		}
		else {
		cur=temp;
		while(cur->left!=NULL)
		{
			cur=cur->left;
			l++;
		}
		ptr=	node;
		while(ptr->right!=NULL)
		{
			ptr=ptr->right;
			r++;
		}
		total=1+l+r;
		return total;
		}
	}
	int count_internal(struct node *temp)
	{
	if(temp==NULL)
	{
		return 0;
	}
	else if(temp->left==NULL && temp->right==NULL)
	{
		return 0;
	}
	else{
		return count_internal(temp->left)+count_internal(temp->right)+1;
		}
	}
};
int main()
{
height_of_tree h;
int n;
root=NULL;
int item;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>item;
h.insert(root,item);
}
h.inorder_trav(root);
cout<<"the height of the tree "<<h.height_tree(root)<<endl;
cout<<"the smallest value in the tree is "<<h.smallest(root)<<endl;
cout<<"greatest value in the tree is "<<h.greatest(root)<<endl;
cout<<"the total number of nodes are "<<h.total_number(root)<<endl;
cout<<"the total number of internal nodes are "<<h.count_internal(root)<<endl;
}


