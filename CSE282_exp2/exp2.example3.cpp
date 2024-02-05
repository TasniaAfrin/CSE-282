#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 struct Node *next;
 };
 void traversalLL(struct Node *ptr)
 {
     while(ptr != NULL)
     {
         cout<<" "<<ptr->data<<endl;
         ptr = ptr->next;
     }
 }
 struct Node* insertAtFirst(struct Node* head, int data)
 {
     struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
     ptr->data= data;
     ptr->next = head;
     return ptr;

     }
 int main()
 {
     struct Node *head;
     struct Node *second;

     head= (struct Node *)malloc(sizeof(struct Node));
     second= (struct Node *)malloc(sizeof(struct Node));

     head->data=5;
     head->next= second;
     second->data=9;
     second->next=NULL;

     cout<<"Before insertion: "<<endl;
     traversalLL(head);

     head= insertAtFirst(head, 2);
     cout<<"After insertion"<<endl;
     traversalLL(head);
return 0;
 }
