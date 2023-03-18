// set is a collection of unique elements
// set and unordered_set stl 
// set stores elements in order, unordered might not.
// set is implied using BST or RED-BLACK tree.
// most actions take o(log n) time; like insertion, deletion
// cannot update elements in it. rather have to remove one and insert other
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,11,9,8,11};
    int n=(sizeof(arr)/sizeof(int));
    
    // unordered_set<int> s;
    set<int> s;
    // inserting all elements in a set
    for(int i=0;i<n;i++)
    s.insert(arr[i]);

    //print all elements
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

    //erasing
    s.erase(10);  //erase a number directly
    // or
    auto it=s.find(11); // erase using its iterator
    s.erase(it);
    cout<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}