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
int sum_left_child (Node *root)
{
    if (root == nullptr) return 0;
    int sum(0);

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *tmp = q.front();

        if (tmp->left != nullptr) {
            q.push(tmp->left);
            sum += tmp->left->data;
        }
        if (tmp->right != nullptr) {
            q.push(tmp->right);
        }

        q.pop();
    }

    return sum;
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
    int s = sum_left_child(root);
    cout<<"Sum of left children is: "<<s<<endl;
    return 0;
}
