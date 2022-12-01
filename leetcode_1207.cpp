//unique number of occurrences
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //driver code
    return 0;
}
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        for (int num : arr) {
            freqMap[num]++;
        }
        unordered_set<int> freqSet;
        for (auto [key, value] : freqMap) {
            freqSet.insert(value);
        }
        return freqSet.size() == freqMap.size();
    }
};