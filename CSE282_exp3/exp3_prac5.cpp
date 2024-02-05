#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *deleteFirst(struct Node *head)
{
    if(head== NULL)        //if the list is empty
    {
        return 0;
    }
    Node* temp= head;      //store the current head node
    head= temp->next;      //make the next node as new head
    if(head != NULL)
    {
        head->prev=NULL;
    }
    delete temp;
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
    struct Node *second= NULL;
    struct Node *third=NULL;
     head= (struct Node *)malloc(sizeof(struct Node));
     second= (struct Node *)malloc(sizeof(struct Node));
     third= (struct Node *)malloc(sizeof(struct Node));

     head->data=1;
     head->next= second;
     second->data=11;
     second->next=third;
     third->data=111;
     third->next= NULL;
     cout<<"Before deletion: "<<endl;
     traversalLL(head);

    head= deleteFirst(head);
    cout<<"After deletion: "<<endl;
    traversalLL(head);
    return 0;
}
