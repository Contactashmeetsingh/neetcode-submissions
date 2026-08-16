class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        if len(nums) <= 1:
            return nums
        res = []
        for i in range(len(nums)-(k-1)):
            temp = []
            for j in range(k):
                temp.append(nums[i+j])
            res.append(max(temp))
            temp.clear()
        return res