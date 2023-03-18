#include<bits/stdc++.h>
using namespace std;
int check(vector<int> v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]%2==v[i+1]%2)
        return false;
    }
    return true;
}
// int fun(vector<int> v)
// {
//     int ans=0;
//     int i=0;
//     while(!check(v)||i==v.size())
//     {
//         for(i=0;i<v.size();i++)
//         {
            
//         }
//     }
//     return ans;
// }
void fun2(vector<int>&v, int ans, int ind)
{
    if(check(v))
    {
    return;
    }

    else
    {
        v[ind]/=2;
        fun2(v,ans+1,ind+1);
        v[ind]*=2;
        fun2(v,ans+1,ind+1);
    }
}
int main()
{
    vector<int> v={4,10,10,6,2};
    int ans=0;
    fun2(v,ans,0);
    cout<<ans;
    return 0;
}