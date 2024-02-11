#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
void inOrderTraversal(Node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    inOrderTraversal(temp->left);
    cout<<" "<<temp->data;
    inOrderTraversal(temp->right);
}
void preOrderTraversal(Node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    preOrderTraversal(temp->right);
    preOrderTraversal(temp->left);
    cout<<" "<<temp->data;
}


void postOrderTraversal(Node *temp)
{
    if(temp==NULL)
    {
        return;
    }
    postOrderTraversal(temp->left);
    postOrderTraversal(temp->right);
    cout<<" "<<temp->data;
}

int main()
{
// Tree construction
Node* root = new Node(50);
root -> left = new Node(17);
root -> right = new Node(72);
root -> left -> left = new Node(12);
root -> left -> right = new Node(23);
root -> right -> left = new Node(54);
root -> right -> right = new Node(76);
root -> left -> left->left = new Node(9);
root -> left -> left->right = new Node(14);
root -> left ->right-> right = new Node(19);
root -> right->left -> right = new Node(67);

cout<<"Inorder Traversal:"<<endl;
inOrderTraversal(root);
cout<<endl;

cout<<"\nPreorder Traversal:"<<endl;
preOrderTraversal(root);
cout<<endl;

cout<<"\nPostorder Traversal:"<<endl;
postOrderTraversal(root);
cout<<endl;
}
