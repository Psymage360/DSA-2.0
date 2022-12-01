//Determine if String Halves Are Alike
class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        else return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int c1=0; int c2=0;
        for(int i=0;i<n/2;i++)
        {
            if(isVowel(s[i]))
                c1++;
        }
        for(int i=n/2;i<n;i++)
        {
            if(isVowel(s[i]))
                c2++;
        }
        return (c1==c2);
    }
};
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //driver code
    return 0;
}