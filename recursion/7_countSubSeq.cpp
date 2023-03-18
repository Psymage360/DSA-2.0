// count the number of subsequences with sum equal to 2.
// fucntion returns integer
#include<bits/stdc++.h>
using namespace std;
int subSeq(int* arr,vector<int> v,int ind, int n, int s,int sum)
{
    if(ind>=n)
    {
        if(s==sum)
        {
        // for(int i=0;i<v.size();i++)
        // cout<<v[i]<<" ";
        // cout<<endl;
        return 1;
    }
    return 0;
    }
    else
    {
        v.push_back(arr[ind]);
        s=s+arr[ind];
        int l= subSeq(arr,v,ind+1,n,s,sum);  // case of taking element in subsequence
        v.pop_back();
        s=s-arr[ind];
        int r=subSeq(arr,v,ind+1,n,s,sum);  // case of NOT taking element in the subsequence
        return l+r;
    }
}
int main()
{
    int arr[]={3,1,2,6,4,4};
    vector<int> v={};
    cout<<subSeq(arr,v,0,sizeof(arr)/sizeof(int),0,5)<<endl;   // array and an empty vector for storing current subsequence
    return 0;
}