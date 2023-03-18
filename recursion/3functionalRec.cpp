#include<bits/stdc++.h>
using namespace std;
void revArr(int *arr,int l, int r)
{
    if(l>=r)
    return;
    else
    {
        swap(arr[l],arr[r]);
        revArr(arr,l+1,r-1);
    }
}
int main()
{
    int arr[]={1,2,3,4,7,6,0,9};
    int n=sizeof(arr)/sizeof(int);
    revArr(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}