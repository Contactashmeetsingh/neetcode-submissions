#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        unordered_set<int> mappy;

        while(i < nums.size()){

            if(mappy.find(nums[i]) != mappy.end()){
                return true;
            }
            
            mappy.insert(nums[i]);
            i++;
        }
        return false;
    }
};