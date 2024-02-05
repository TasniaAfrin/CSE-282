#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int findPosition(Node* head, int k) {
    int position = 1;  // Start counting from 1
    Node* current = head;
    while (current != NULL) {
        if (current->data == k) {
            return position;  // Element found, return its position
        }
        current = current->next;
        position++;
    }

    return -1;  // Element not found
}

int main()
 {
    Node* head = new Node();
    head->data = 8;
    head->next = new Node();
    head->next->data = 14;
    head->next->next = new Node();
    head->next->next->data = 22;

    int k = 22;  // Element to search for

    int position = findPosition(head, k);

    if (position != -1) {
        cout<<"Element "<<k<<" found at position "<<position<<endl;
    } else {
        cout<<"Element "<<k<<" not found in the list"<<endl;
    }

    return 0;
}
