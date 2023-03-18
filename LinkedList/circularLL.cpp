#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insert(node*&head, int data)
{
    node*n=new node(data);
    node*temp=head;
    n->next=head;
    if(temp!=NULL){
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    }
    else //(temp==NULL ie inserting first node)
    {
        n->next=n;
    }
    head=n;
}
void print(node*head)
{
    node*temp=head;
    if(head==NULL)
    return;
    if(temp->next==temp)
    {
        cout<<temp->data<<endl;
        return;
    }
    else
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    }
}
node* getNode(node*head, int key)
{
    node*temp=head;
    while(temp->next!=head)
    {
        if(temp->data==key)
        return temp;
        temp=temp->next;
    }
    if(temp->data==key)
    return temp; // check last node as well
    else
    return NULL;
}
int length(node*head)
{
    node*temp=head; //have to create temp everytime as head will get updated
    int l=0;
    if(temp==NULL)
    return 0;
    if(temp->next==temp)
    return 1;
    else{
        while(temp->next!=head)
        {
            l++;
            temp=temp->next;
        }
    return l+1; //include last node
    }
}
void deleteNode(node*&head, int data)
{
    node*del=getNode(head,data);
    if(del==NULL)
    return;
    if(head==del)
    head=head->next;
    node*temp=head;
    while(temp->next!=del)
    {
        temp=temp->next;
    }
    temp->next=del->next;
    delete del; 
}
int main()
{
    node*head=NULL;
    insert(head,0);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    // cout<<head->data<<head->next->data<<endl;
    deleteNode(head,4);
    print(head);   
    cout<<length(head);
    return 0;
}