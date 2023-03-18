// indian money change problem
// change given amount of money in minimum number of coins/notes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int value;
    cout<<"enter value"<<endl;
    cin>>value;
    int result[n]={};
    int index=0;
    while(value>0)
    {
// can use upper bound becoz only 1 instance of every element and need strict inequality
        auto it=upper_bound(coins,coins+n,value);
        index=(it-coins)-1;
        value=value-coins[index];
        result[index]++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<coins[i]<<"x"<<result[i]<<endl;
    }
    return 0;
}