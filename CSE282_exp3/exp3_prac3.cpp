#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node* insertAtFirst(struct Node* head, int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next= head;
    newnode->prev= NULL;
    if(head=NULL)
    {
        head->prev= newnode;
    }
    head=newnode;
}
void traversalLL(struct Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<" "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    struct Node *head=NULL;
    struct Node *second =NULL;

     head= (struct Node *)malloc(sizeof(struct Node));
     second= (struct Node *)malloc(sizeof(struct Node));

     head->data=15;
     head->next= second;
     second->data=19;
     second->next=NULL;
     cout<<"Before insertion: "<<endl;
     traversalLL(head);

    head= insertAtFirst(head, 12);
    cout<<"After insertion: "<<endl;

    traversalLL(head);
    return 0;
}
