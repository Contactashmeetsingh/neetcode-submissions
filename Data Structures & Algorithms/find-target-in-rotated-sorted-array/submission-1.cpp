class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int l = nums.size()-1;
        while(i<=l){
            int mid = (i+l)/2;

            if(nums[mid]== target){
                return mid;
            }
                // left sorted portion
            if(nums[mid] >= nums[l]){
                if(target>nums[mid]||target<nums[i]){
                    i=mid+1;
                }
                else {
                    l=mid-1;
                }
            }
            else{
                if(target>nums[l]||target<nums[mid]){
                    l= mid-1;
                }
                else {
                    i=mid+1;
                }
            }
        }
        return -1;
    }
};
