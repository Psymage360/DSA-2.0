#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>>s;
    s.insert(make_pair(10,20));
    s.insert(make_pair(10,1));
    s.insert(make_pair(20,1));
    s.insert(make_pair(20,100));
    s.insert(make_pair(50,80));
    s.insert(make_pair(30,90));
    s.insert(make_pair(10,1));

    s.erase(make_pair(10,1));
    // s.erase(make_pair(1,1));
    s.erase(s.find(make_pair(20,1)));
    // s.erase(s.find(make_pair(1,1)));

    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl; 
    //upper bound gives the least element < the given arguement
    // lower bound gives the greatest element >= the given arguement
    auto it=s.lower_bound(make_pair(10,20));
    cout<<(*it).first<<" "<<(*it).second<<endl;
    it=s.lower_bound(make_pair(11,5));
    cout<<(*it).first<<" "<<(*it).second<<endl;
    it=s.upper_bound(make_pair(20,50));
    cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}