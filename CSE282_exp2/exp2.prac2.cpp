#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int getLength(Node* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}
int main() {
    Node* head = new Node();
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = nullptr;

    int length = getLength(head);
    cout << "Length of the linked list: " << length << endl;

    return 0;
}
