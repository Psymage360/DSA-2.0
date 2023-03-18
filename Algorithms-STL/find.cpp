// searching->find()
// find(begin address, end address, key);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    // find returns the address of the cell holding the key
    auto it=find(arr,arr+n,key);
    int index=(it-arr);
    if(index<n)
    cout<<"address is "<<it<<" and index is "<<index<<endl;

    // if key is not present, then find returns the address to the cell after last element
    if(index==n)
    cout<<"not found"<<endl;
    return 0;
}