//Practice Exercise 1: Write a C++ program to find the height of the following tree
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data = val;
        left=right=NULL;
    }
};
int maxDepth(Node *root)
{
    if(root==NULL){
        return 0;
    }
    int lh= maxDepth(root->left);
    int rh= maxDepth(root->right);
    return 1+max(lh, rh);
}
int main()
{
    Node *root = new Node(50);
    root->left = new Node(17);
    root -> right = new Node(72);
    root -> left -> left = new Node(12);
    root -> left -> right = new Node(23);
    root -> right -> left = new Node(54);
    root -> right -> right = new Node(76);
    root -> left -> left->left = new Node(9);
    root -> left -> left->right = new Node(14);
    root -> left ->right-> right = new Node(19);
    root -> right->left -> right = new Node(67);

    int h = maxDepth(root);
    cout<<"Height: "<<h<<endl;

}
