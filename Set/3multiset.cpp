#include<bits/stdc++.h>
using namespace std;
typedef multiset<int>::iterator It;
int main()
{
    // multiset- that can store multiple element that have same elements
    // stored in a specific -> sorted according to internal comparison object.
    // values once inserted cannot be modified
    // associative container-> elements are referred by their keys and not by their indices.
    // underlying ds=BST

    int arr[]={10,20,30,20,30,20,10,10};
    multiset<int> m(arr,arr+8);

    //erase
    m.erase(20);

    //insert
    m.insert(80);

    //count ; returns frequency of the arguement
    cout<<"count result "<<m.count(10)<<endl;
    cout<<"count result "<<m.count(100)<<endl;

    // find
    auto it =m.find(30);
    cout<<"find result "<<*it<<endl;
    it =m.find(70);
    cout<<"find result "<<*it<<endl;


    // iterate
    for(multiset<int>::iterator it=m.begin();it!=m.end();it++)
    cout<<*it<<endl; 
    // for (int x:m)
    // {
    //     cout<<x<<endl;
    // }

    //get all elements which are equal to 30
    pair<It,It> range=m.equal_range(30);
    for(auto it=range.first;it!=range.second;it++)
    {
        cout<<*it<<endl;
    }

    //lower >= and upper < bounds
    cout<<"\nbounds\n"<<endl;
    for(auto it=m.lower_bound(10);it!=m.upper_bound(77);it++)
    cout<<*it<<endl;
    return 0;
}