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
 struct Node * insertAtEnd(struct Node * head, int data)
 {
     struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
     ptr->data= data;
     struct Node* temp= head;
     while(temp->next!=NULL){
        temp = temp->next;
     }
     temp->next = ptr;
     ptr->next= NULL;
     return head;
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

     head= insertAtEnd(head, 20);
     cout<<"After insertion"<<endl;
     traversalLL(head);


 }
