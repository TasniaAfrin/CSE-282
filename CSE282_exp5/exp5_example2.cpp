

#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   Node *left;
   Node *right;

 Node(int val)
 {
   data = val;
   left = right = NULL;
 }
};
void inOrderTraversal(Node *temp)
{
    if(temp == NULL){
        return;
    }
    inOrderTraversal(temp->left);
    cout<<temp->data<<" ";
    inOrderTraversal(temp->right);
}
int main()
{
Node* root = new Node(1);
root -> left = new Node(2);
root -> right = new Node(3);
root -> left -> left = new Node(4);
root -> left -> right = new Node(5);
root -> right -> left = new Node(6);
root -> right -> right = new Node(7);
cout<<"Inorder Traversal: "<<endl;
inOrderTraversal(root);
}
