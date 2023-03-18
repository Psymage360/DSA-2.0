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
//passign head by ref else head updation will not be reflected in main
int length(node*head)
{
    int c=0;
    while(head!=NULL)
    {
        head=head->next;
        c++;
    }
    return c;
}
void insertAthead(node*&head,int d)
{
    if(head==NULL)
    {
    head=new node(d);
    return;
    }
    node* n=new node(d);
    n->next=head;
    head=n;

}
void insertMid(node*head,int index,int d)
{
    node* temp= head;
    for(int i=0;i!=(index-1);i++)
    temp=temp->next;
    node*n=new node(d);
    n->next=temp->next;
    temp->next=n;
}
void insertAtEnd(node*head, int data)
{
    if(head==NULL)
    insertAthead(head,data);
    node*tail=head;
    while(tail->next!=NULL)
    tail=tail->next;
    tail->next=new node(data);
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insert(node*&head,int index,int data)
{
    if(index>=(length(head)))
    {
    insertAtEnd(head,data);
    return;}
    if(head==NULL||index==0)
    insertAthead(head,data);
    if(index>0&&index<length(head))
    insertMid(head,index,data);

}
void deletehead(node*&head)
{
    if(head==NULL)
    return;
    node*temp=head->next;
    delete head;
    head=temp;
}
void deleteAny(node*head, int index)
{
    if(index==(length(head)-1))
    {
        while(head->next->next!=NULL)
        head=head->next;
        node*temp=head->next;
        head->next=NULL;
        delete temp;
        return;
    }
    if(index==0)
    {

    }
    for(int i=0;i<index-1;i++)
    {
        head=head->next;
    }
    node*temp=head->next;
    head->next=temp->next;
    delete temp;
}
int search(node*&head, int key)  //returns index, else -1
{
    int c=0;
    node*copy=head;
    if(copy==NULL)
    return -1;
    while(copy!=NULL)
    {
        if(copy->data==key)
        return c;
        copy=copy->next;
        c++;
    }
    return -1;
}
bool recursiveSearch(node*head,int key)
{
    if(head==NULL)
    return false;
    else
    {
        if(head->data==key)
        return true;
        else return recursiveSearch(head->next,key);
    }
}
node* makeList()  //inserts value at head till -1 entered
{
    int terminator;
    cin>>terminator;
    node*head=NULL;
    while(terminator!=-1)  // while(cin>>terminator) for taking input from files till data exists
    {
        insertAthead(head,terminator);
        cin>>terminator;
    }
    return head;
}
// **important: operator overloading for printing list 
ostream& operator<<(ostream &os, node*head)
{
    print(head);
    return os;
}
istream& operator>>(istream&is, node*&head)
{
    head=makeList();
    return is;
}
void reverse(node*&head)
{
    node*c=head;
    node*p=NULL;
    node*n;
    while(c!=NULL)
    {
        n=c->next; //save next node
        c->next=p; // make the current node point to previous node
        p=c;
        c=n; 
    }
    head=p;
}
node* recReverse(node*head)
{
    if(head->next==NULL or head==NULL)
    return head;
    node*shead=recReverse(head->next);
    node*temp=shead;
    while(temp->next!=NULL)
    temp=temp->next;
    head->next=NULL;
    temp->next=head;
    return shead;
}
node* midNode(node* head) //midpoint using midpoint runner Technique
{
    if(head==NULL||head->next==NULL)
    return head;
    node*fast=head;
    node*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
// kth node from end
node* kthEndNode(node* head, int k)
{
    node*fast=head;
    node*slow=head;
    for(int i=0;i<k;i++)
    fast=fast->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
node* mergeSortedLists(node*a, node*b)
{
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    node*c;
    if(a->data<b->data)
    {
    c=a;
    c->next=mergeSortedLists(a->next,b);
    }
    else
    {
    c=b;
    c->next=mergeSortedLists(a,b->next);
    }
    return c;
}
node* mergesort(node*head)
{
    // break into two lists
    // recursively sort the two parts
    // merge both list
    if(head==NULL || head->next==NULL){  //base case
    return head;
    }
    node*mid=midNode(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    a=mergesort(a);
    b=mergesort(b);
    node*c=mergeSortedLists(a,b);
    return c;
}
/* comment out main function to include basic functions in other files
int main()
{
    node*head=NULL;
    // insertAthead(head,0);
    // insertAthead(head,1);
    // insertAthead(head,2);
    // insertAthead(head,3);
    // insertAthead(head,4);
    // insertMid(head,2,5);
    // insertAtEnd(head,6);
    // insertAthead(head,7);
    // insertMid(head,2,8);
    // insertAtEnd(head,9);
    // insert(head,0,0);
    // insert(head,0,1);
    // insert(head,0,2);
    // insert(head,0,3);
    // insert(head,0,4);
    // insert(head,5,5);
    // insert(head,3,7);
    // deletehead(head);
    // deletehead(head);
    // deleteAny(head,7);
    // deleteAny(head,1);
    // print(head);
    // cout<<"length "<<length(head)<<endl;
    // cout<<search(head,5)<<" "<<search(head,10)<<endl;
    // cout<<"recursive search for 6 results "<<recursiveSearch(head,6)<<endl;
    // head=makeList();
    // node*head2=makeList();
    // list is 5->4->3->2->1
    // node*head2=NULL;    
    cin>>head;
    cout<<head;
    // cin>>head2;
    // cout<<head2;
    // reverse(head);
    // head=recReverse(head);
    // node*n=mergeSortedLists(head,head2);
    // cout<<n;
    // cout<<midNode(head)->data<<endl;
    // cout<<kthEndNode(head,2)->data<<endl;
    // print(head);
    // head=mergesort(head);
    // cout<<head;
    return 0; 
} */