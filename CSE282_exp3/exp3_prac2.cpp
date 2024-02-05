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
 struct Node* insertkthPosition(struct Node* head, int data, int k)
 {
     struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
     struct Node *p = head;
     int i=0;
     while(i != k-1)
     {
         p=p->next;
         i++;
     }
     ptr->data= data;
     ptr->next = p->next;
     p->next = ptr;
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
     third=(struct Node *)malloc(sizeof(struct Node));
     fourth=(struct Node *)malloc(sizeof(struct Node));

     head->data=3;
     head->next= second;
     second->data=5;
     second->next=third;
     third->data=9;
     third->next=fourth;
     fourth->data=11;
     fourth->next=NULL;

     cout<<"Before insertion: "<<endl;
     traversalLL(head);

     head= insertkthPosition(head, 7, 2);
     cout<<"After insertion:"<<endl;
     traversalLL(head);
return 0;
 }
