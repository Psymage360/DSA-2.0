// print any 1 feasible subsequence with summation equal to s;
// function has to boolean
// returns true when a feasible ans is printed does not print any further

#include<bits/stdc++.h>
using namespace std;
bool subSeq(int* arr,vector<int> v,int ind, int n, int s,int sum)
{
    if(ind>=n)
    {
        if(s==sum)
        {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        return true; // returns true when feasible seq printed
    }
    return false; // returns false if seq not printed.
    }
    else
    {
        v.push_back(arr[ind]);
        s=s+arr[ind];
        if(subSeq(arr,v,ind+1,n,s,sum)) return true;  // case of taking element in subsequence
        v.pop_back();
        s=s-arr[ind];
        if(subSeq(arr,v,ind+1,n,s,sum)) return true;  // case of NOT taking element in the subsequence
        return false;
    }
}
int main()
{
    int arr[]={3,1,2,6,4};
    vector<int> v={};
    subSeq(arr,v,0,sizeof(arr)/sizeof(int),0,5);   // array and an empty vector for storing current subsequence
    return 0;
}