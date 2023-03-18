// swap,max,min,reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;;
    cout<<max(a,b)<<" "<<min(a,b)<<endl;

    //reverse
    int arr[]={1,2,3,4,5,6,7};
    //reverse the array [index_begin,index_end); rest remains as it is
    reverse(arr,arr+4);
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

    // swap works on array elements too
    swap(arr[5], arr[6]); //6,7->7,6
    cout<<arr[5]<<" "<<arr[6]<<endl;
    return 0;
}