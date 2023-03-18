//implementing circular queue using array
// functions:
// push
// pop
// front
// empty
// full
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int f,r,cs,ms;
    public:
    Queue(int ds)
    {
        arr=new int[ds];
        cs=0;
        ms=ds;
        f=0;
        r=ms-1;
    }
    bool full()
    {
        return cs==ms;
    }
    bool empty()
    {
        return cs==0;
    }
    void push(int data)
    {
        if(full())
        cout<<"queue full"<<endl;
        else
        {
            r=(r+1)%ms;
            arr[r]=data;
            cs++;
        }
    }
    void pop()
    {
        if(empty())
        cout<<"queue empty"<<endl;
        else
        {
            // cout<<arr[f]<<"popped"<<endl;
            f=(f+1)%ms;         //data not deleted; just not accesible by queue
            cs--;

        }
    }
    int front()
    {
        return arr[f];
    }
    ~Queue(){
        if(arr!=NULL)
        delete[]arr;
        arr=NULL;
    }

};
int main()
{
    Queue q(5);
    for(int i=0;i<5;i++)
    q.push(i);
    // q.pop();
    // q.pop();
    // q.push(7);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}