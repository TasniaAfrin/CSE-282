#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *insertAtEnd(struct Node *head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next= NULL;
    //if the list is empty
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        /*return 0;*/
    }
    //else traverse the last node
    Node *last= head;
    while(last->next != NULL)
    {
        last=last->next;
    }
    //change next of last to new node
    last->next=newnode;
    //make previous of new node as last node
    newnode->prev=last;
    return head;
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

     head->data=21;
     head->next= second;
     second->data=7;
     second->next=NULL;
     cout<<"Before insertion: "<<endl;
     traversalLL(head);

    head= insertAtEnd(head, 14);
    cout<<"After insertion: "<<endl;
    traversalLL(head);
    return 0;
}
