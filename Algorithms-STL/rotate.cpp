// rotating an array; rotate(begin address, pivoting address(becomes first), end address)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;   //30,40,50,10,20
    }
    return 0;
}