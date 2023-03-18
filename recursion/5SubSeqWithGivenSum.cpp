// print all subsequence with summation equal to s;
#include<bits/stdc++.h>
using namespace std;
void subSeq(int* arr,vector<int> v,int ind, int n, int s,int sum)
{
    if(ind>=n)
    {
        if(s==sum)
        {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    }
    else
    {
        v.push_back(arr[ind]);
        s=s+arr[ind];
        subSeq(arr,v,ind+1,n,s,sum);  // case of taking element in subsequence
        v.pop_back();
        s=s-arr[ind];
        subSeq(arr,v,ind+1,n,s,sum);  // case of NOT taking element in the subsequence
    }
}
int main()
{
    int arr[]={3,1,2,6,4};
    vector<int> v={};
    subSeq(arr,v,0,sizeof(arr)/sizeof(int),0,5);   // array and an empty vector for storing current subsequence
    return 0;
    return 0;
}