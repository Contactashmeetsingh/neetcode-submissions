class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []

        ss =[]
        def dfs(index):
            if index == len(nums):
                res.append(ss.copy())
                return

            ss.append(nums[index])
            dfs(index+1)

            ss.pop()
            dfs(index+1)

            return


        dfs(0)
        return res


            

        
        