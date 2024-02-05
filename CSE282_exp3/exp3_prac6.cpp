#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *deleteLast(struct Node *head)
{   //for empty list
    if(head==NULL)
    {
        return 0;
    }
    //single node in the list
    if(head->next == NULL){
        delete head;
    head=NULL;
    return 0;
    } //traverse the second last node
Node* secondlast= head;
while(secondlast->next->next != NULL)
{
    secondlast = secondlast->next;
}    //delete the last node
Node* last= secondlast->next;
secondlast->next=NULL;
delete last;
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

     head->data=2;
     head->next= second;
     second->data=202;
     second->next=third;
     third->data=2020;
     third->next= NULL;
     cout<<"Before deletion: "<<endl;
     traversalLL(head);

    head= deleteLast(head);
    cout<<"After deletion: "<<endl;
    traversalLL(head);
    return 0;
}
