// why use: insert,erase,find take O(1) time on average (until rehashing required)
//keys are unordered
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    // insert
    m.insert(make_pair("mango",100));
    
    pair<string,int> p;
    p.first="apple";
    p.second=120;
    m.insert(p);

    m["banana"]=20;
    for(auto p:m)
    cout<<p.first<<"->"<<p.second<<endl;

    
    //searching
    string key;
    cout<<"enter key"<<endl;
    cin>>key;
    auto it=m.find(key);                // auto=map<string,int>::iterator it
    if(it!=m.end())
    cout<<"price of "<<key<<" is "<<m[key]<<endl;
    else 
    cout<<"not present"<<endl;

    // another way to find in a map
    // it stores unique keys only once
    cout<<"enter key"<<endl;
    cin>>key;
    if(m.count(key))
    cout<<"price of "<<key<<" is "<<m[key]<<endl;
    else
    cout<<"nt present"<<endl;

    //erasing
    m.erase(key);
    if(m.count(key))
    cout<<"price of "<<key<<" is "<<m[key]<<endl;
    else
    cout<<"nt present"<<endl;

    //updating price
    cout<<"Enter Key"<<endl;
    cin>>key;
    m[key]=m[key]+20;
    cout<<"price of "<<key<<" is "<<m[key]<<endl;

    m["litchi"]=60;
    m["guava"]=80;
    //iterate over all key value pairs
    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<"->"<<it->second<<endl;
    m["aam"]=80;  //map stores in order of key
    // traversing using for:each loop
    for(auto p:m)
    cout<<p.first<<"->"<<p.second<<endl;


    return 0;
}