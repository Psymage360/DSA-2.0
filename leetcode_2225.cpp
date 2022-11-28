// find players with zero or one losses
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //driver code//
    return 0;
}
class Solution 
{
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        map<int,int> lost;
        for (auto m : matches)
        {
            if (!lost.count(m[0])) lost[m[0]] = 0;
            lost[m[1]]++;
        }
        
        vector<int> zero, ones;
        for (auto[k,l] : lost)
        {
            if (l == 0) zero.push_back(k);
            if (l == 1) ones.push_back(k);
        }
        
        return {zero,ones};
    }
};