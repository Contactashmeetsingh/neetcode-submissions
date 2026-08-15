class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int l = nums.size()-1;
        while(i<=l){
            // cout<<"nums[i] ="<<nums[i]<<endl;
            // cout<<"nums[l] ="<<nums[l]<<endl;
            if(nums[i]==target ){
                return i;
            }
            if(nums[l]==target){
                return l;
            }
            i++;
            l--;
        }
        return -1;
    }
};
