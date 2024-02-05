#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*newnode;
void display()
{
    struct node *temp;
    temp=head;
    while(temp != 0)
    {
        cout<<" "<<temp-data;
        temp = temp->next;
    }
}
void create()
{
    head=NULL;
    newnode= (struct node *)malloc(sizeof(struct node));
    newnode->data=4;
    newnode->prev=0;
    newnode->next=0;
    if(head == NULL)
    {
        head= temp= newnode;
    }else
    {
        temp->next=newnode;
        newnode->prev= temp;
        temp= newnode;
    }

}
int main()
{
    create();
    display();
}
