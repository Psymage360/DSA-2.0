#include<bits/stdc++.h>
using namespace std;
int main()
{
    //init
    list<int> l1{1,2,3,4,5,6};
    list<string> l2{"apple","guava","mango"};
    l2.push_back("pome");
    l2.push_front("cherry");
    // iterate and print data
    // for(string s:l2) // for each string s in l2
    // cout<<s<<endl;
    // sort
    // l2.sort();
    // reverse 
    l2.reverse();
    //pop front pop back
    l2.pop_back();
    l2.pop_front();
    // for(string s:l2) // for each string s in l2
    // cout<<s<<endl;
    // cout<<l2.front()<<l2.back()<<endl; //first element
    // for(string s:l2) // for each string s in l2
    // cout<<s<<endl;
    l2.push_back("apple");
    // remove all instances of a particular element
    // string s;
    // cin>>s;
    // l2.remove(s);
    for(auto it=l2.begin();it!=l2.end();it++) //[begin,end) prints all
    cout<<(*it)<<endl;
    cout<<endl;
    // erase one or more elements from list
    auto it=l2.begin();
    it++; //points to second element
    l2.erase(it);
    for(string s:l2) // for each string s in l2
    cout<<s<<endl;
    cout<<endl;
    //insert elements in the list
    it=l2.begin();
    it++;
    l2.insert(it, "fruitj");
    for(string s:l2) // for each string s in l2
    cout<<s<<endl;
    return 0;
}