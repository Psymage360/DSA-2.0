//Insert Delete GetRandom O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //driver code
    return 0;
}
class RandomizedSet {
public:
    unordered_map<int, int> mpVal2;
    vector<int> list;
    
    bool insert(int val) {
        if (mpVal2.count(val)) return false;
        mpVal2[val] = list.size();
        list.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!mpVal2.count(val)) return false;
        int removeIdx = mpVal2[val];
        mpVal2.erase(val);
        if (removeIdx < list.size() - 1) { // if we can replace with last value
            int lastVal = list[list.size() - 1];
            list[removeIdx] = lastVal;
            mpVal2[lastVal] = removeIdx;
        }
        list.pop_back();
        return true;
    }
    
    int getRandom() {
        return list[rand() % list.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */