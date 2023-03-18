//pair<varType,varType> p;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,char>p;
    p.first=10;
    p.second='B';
    cout<<p.first<<" "<<p.second<<endl;
    //copy of pair
    pair<int,char>p0(p);
    p0.first++;
    p0.second++;
    cout<<p0.first<<" "<<p0.second<<endl;

//another method of initialization; using make_pair(element/variable,element/variable) fn
    pair<int,string> p1=make_pair(10,"Haha");
    cout<<p1.first<<" "<<p1.second<<endl; 
    int a=5,b=9;
    pair<int,int>p2=make_pair(a,b);

    //can make array of pairs
    // can make vector of pairs
    //can make pair having pairs
    pair<pair<int,int>,string> p3;
    // access method
    p3.second="Ferrari";
    p3.first.first=10;
    p3.first.second=20;
    return 0;
}
        for(int i=0;i<s1.length();i++)
        {
            if(s1==s2);
            else continue;
        }