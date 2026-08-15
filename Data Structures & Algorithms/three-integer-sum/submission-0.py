class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        
        for i, num in enumerate(nums):
            x = -num
            y = i+1
            z = len(nums)-1

            while y < z :
                ans = nums[y] + nums[z]
                # print
                print(x, nums[y], nums[z], ans)

                if ans == x:
                    vec = [-x,nums[y],nums[z]]
                    if vec not in res:
                        res.append(vec)
                
                if ans < x:
                    y += 1
                else:
                    z -= 1


        return res