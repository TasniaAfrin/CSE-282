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
 struct Node * deleteFirst(struct Node * head)
 {
   struct Node *ptr=head;
   head=head->next;
   free(ptr);
   return head;
 }
 int main()
 {
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;

     head= (struct Node *)malloc(sizeof(struct Node));
     second= (struct Node *)malloc(sizeof(struct Node));
     third= (struct Node *)malloc(sizeof(struct Node));
     fourth= (struct Node *)malloc(sizeof(struct Node));

     head->data=5;
     head->next= second;
     second->data=9;
     second->next=third;
     third->data=14;
     third->next=fourth;
     fourth->data=17;
     fourth->next=NULL;

     cout<<"Before deletion: "<<endl;
     traversalLL(head);

     head= deleteFirst(head);
     cout<<"After deletion: "<<endl;
     traversalLL(head);


 }
