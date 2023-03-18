//queue: first non repeating character
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> q;
    int freq[26]={};
    // running a character stream until a '.' occurs;
    char ch;
    cin>>ch;
    while(ch!='.')
    {
        freq[ch-'a']++;
        q.push(ch);
        while(!q.empty())
        {
        if(freq[q.front()-'a']>1)
        q.pop();
        else
        {
            cout<<q.front();
            break;
        }
        }
        if(q.empty())
        cout<<"-1";
        cin>>ch; // give input at once aabcccbc; cin takes ch onebyone till none left
    }
    return 0;
}