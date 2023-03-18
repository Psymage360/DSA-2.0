#include<bits/stdc++.h>
using namespace std;
int fun(int n, int sum=0)
{
    if(n==0)
    return sum;

    else 
    {
        return fun(n-1,sum+n);
    }
}
int fun1(int n)
{
    if(n==0)
    return 0;
    else
    return n+fun1(n-1);
}
int main()
{
    cout<<fun1(4)<<endl;
    return 0;
}