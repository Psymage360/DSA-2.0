// push
// pop
// front
// empty
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=0;i<5;i++)
    q.push(i);
    q.pop();
    cout<<"empty returns "<<q.empty()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"empty returns "<<q.empty()<<endl;
    return 0;
}