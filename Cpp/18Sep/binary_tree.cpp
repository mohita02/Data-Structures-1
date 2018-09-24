#include<iostream>
using namespace std;

// Structure of the node for tree
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int val){
    //Allocate Memory for the new node
    struct node *nn = (struct node*)malloc(sizeof(struct node));
    
    // Assign data
    nn->data = val;

    // Initialize left and right as NULL
    nn->left = NULL;
    nn->right = NULL;
    return(nn);
}

void printPostOrder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    printPostOrder(ptr->left);
    printPostOrder(ptr->right);
    cout<< ptr->data<<" ";
}

int main(void){
    // Create root node
    struct node *root = newNode(1);
    
    // Assign left and right pointer values
    root->left = newNode(2);
    root->right = newNode(3);

    // As level 1 is complete
    // Assign next value to left of the left
    root->left->left = newNode(4);
    
    cout<<"Post Order Traversal : ";
    printPostOrder(root);
    cout<<endl;
    return 0;
}