class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i = 0;
        int zeroCounter = 0;
        int multiple = 1;
        while( i < nums.size()){
            
            if(nums[i] != 0){
                multiple *= nums[i];
            }
            else{
                zeroCounter++;
            }
            i++;
        }
        cout<< "multiple = "<< multiple<<endl;
        cout<< "Zero Count = "<< zeroCounter;

        vector<int> answer;
        if(zeroCounter == 0){
            for( int num : nums){
                answer.push_back(multiple/num);
            }
        }
        else{
            if(zeroCounter == 1){
                for(int num : nums){
                    if(num == 0){
                        answer.push_back(multiple);
                    }
                    else{
                        answer.push_back(0);
                    }
                }
            }
            else{
                for(int num: nums){
                    answer.push_back(0);
                }
            }
        }

        return answer;
    }
};
