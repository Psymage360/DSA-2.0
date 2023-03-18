#include<bits/stdc++.h>
#include "ListBaseCode.cpp"
using namespace std;
bool detectCycle(node*head)
{
    node*fast=head;
    node*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        return true;  // cycle present
    }
    return false; //not present
}
int main()
{
    node*head;
    cin>>head;
    cout<<head;
    cout<<detectCycle(head);
    return 0;
}