// fibonacci using dp
#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp)
{
    if(n<=1)
        return dp[n]=1;
    else
    {
        if(dp[n]!=-1)
            return dp[n];
        else
            return dp[n]=f(n-1,dp)+f(n-2,dp);
    }
}
int main()
{
    int n=6;
    vector<int> dp(n,-1);
    cout<<f(5,dp)<<endl;
    for(auto it=dp.begin();it!=dp.end();it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}