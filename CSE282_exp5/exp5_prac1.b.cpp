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
Node* root = new Node(1);

root -> left = new Node(3);
root -> left -> left = new Node(5);
root -> left -> right = new Node(2);

root -> left -> left-> right = new Node(4);
root -> left -> right-> left = new Node(7);
root -> left-> right-> right = new Node(8);

root -> left->left->right-> right = new Node(11);
root -> left->right->left->right = new Node(9);
root -> left->right->right->right = new Node(13);

root -> left->right->right->right->right = new Node(12);

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
