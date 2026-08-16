class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> k;
        unordered_map<int,int> mappy;

        for(int i =0 ; i < nums.size(); i++){
           mappy.emplace(nums[i],i);
        }

        for (int j =0 ; j < nums.size(); j++){
            int diffence = target - nums[j];

            if(mappy.count(diffence) && mappy[diffence] != j){
                k.push_back(j);
                k.push_back(mappy[diffence]);

                break;
            }

        }
        
        return k;
    }
};
