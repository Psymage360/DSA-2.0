//queue implementation using linked list STL.
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Queue
{
    int cs;
    list<T> l;
    public:
    Queue()
    {
        cs=0;
    }
    bool empty()
    {
        return cs==0;
    }
    void push(T data)
    {
        l.push_back(data);
        cs++;
    }
    void pop()
    {
        if(!empty())
        {
        l.pop_front();
        cs--;
        }
        else cout<<"Empty List"<<endl;
    }
    T front()
    {
        return l.front();
    }
};
int main()
{
    Queue<int> q;
    for(int i=0;i<5;i++)
    q.push(pow(i,2));
    q.pop();
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}