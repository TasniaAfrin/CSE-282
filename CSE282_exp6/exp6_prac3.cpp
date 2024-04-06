#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isBST(Node* root, int minVal = INT_MIN, int maxVal = INT_MAX) {
    if (root == NULL) return true;

    if (root->data <= minVal || root->data >= maxVal) return false;

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}

int main() {
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

if (isBST(root)) {
    cout<<"The tree is a Binary Search Tree."<<endl;
} else {
    cout<<"The tree is not a Binary Search Tree."<<endl;
}

   return 0;
}
