#include<bits/stdc++.h>
using namespace std;
string fun(string str)
{
    string mx = "";
    for (int i = 0; i < str.length(); ++i)
        mx = max(mx, str.substr(i));
 
    return mx;
}
int main()
{
    string s="aabcb";
    vector<int> map(26,0);
    for(int i=0;i<s.length();i++)
    {
        map[s.at(i)-'a']++;
    }
    for(int i=0;i<map.size();i++)
    cout<<map[i]<<endl;
    
    // cout<<fun("abcb");
    return 0;
}