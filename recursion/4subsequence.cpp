// printing subsequence of array
// watch strivers l6:recursion on subsequenc
#include<bits/stdc++.h>
using namespace std;
void subSeq(int* arr,vector<int> v,int ind, int n)
{
    if(ind>=n)
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        return;
    }
    else
    {
        v.push_back(arr[ind]);
        subSeq(arr,v,ind+1,n);  // case of taking element in subsequence
        v.pop_back();
        subSeq(arr,v,ind+1,n);  // case of NOT taking element in the subsequence
    }
}
int main()
{
    int arr[]={3,1,2,6,4};
    vector<int> v={};
    subSeq(arr,v,0,sizeof(arr)/sizeof(int));   // array and an empty vector for storing current subsequence
    return 0;
}