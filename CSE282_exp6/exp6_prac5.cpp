//Practice Exercise 5: Write a C++ program to find the sum of the left child of a given tree.
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
int sumLeftChild(Node* root)
{
    if(root == NULL)
        return 0;
    int leftsum = 0;
    if(root->left != NULL)
        leftsum += root->left->data;

    leftsum += sumLeftChild(root->left);
    leftsum += sumLeftChild(root->right);

    return leftsum;
}

int main()
{
    Node* root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);
    int s = sumLeftChild(root);
    cout<<"Sum of left children is: "<<s<<endl;
    return 0;
}
