class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        summ = 0
        sar= nums[0]
        for i in nums:
            if summ < 0:
                summ = 0
            summ+=i
            sar= max(sar, summ)
            print(sar)
        return sar