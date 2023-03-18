// next_permutation(begin address, end address); gets and store next lexicographical
// permutation in the same array.
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v={1,2,3};
    for(int i=0;i<6;i++)
    {
        print(v);
        next_permutation(v.begin(),v.end());
    }   
    return 0;
}