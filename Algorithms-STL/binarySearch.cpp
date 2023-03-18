//binary search function in STL
// binary_search(begin address, end address, key); returns true if present else false.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,4,4,4,5,5,6};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    bool result=binary_search(arr,arr+n, key);
    cout<<result<<endl;
    
    // two more things
    // get the index of the max_element
    // upper_bound(s,e,key) returns address of first element strictly >key
    // lower_bound(s,e,key) returns address of first element>=key
    // they both return address of cell next to lastt cell if key not present

    auto it1=lower_bound(arr,arr+n,key);
    cout<<"LOWER BOUND INDEX IS "<<(it1-arr)<<endl;
    auto it2=upper_bound(arr,arr+n,key);
    cout<<"UPPER BOUND INDEX IS "<<(it2-arr)<<endl;
    
    // FREQUENCY OF AN ELEMENT= UPPER BOUND-LOWER BOUND;
    cout<<"frequency of the key is "<<(it2-it1)<<endl;

    if((it1-arr)==n)
    cout<<"element not present"<<endl;
    else
    cout<<"element found at "<<(it1-arr)<<endl;
    return 0;
}