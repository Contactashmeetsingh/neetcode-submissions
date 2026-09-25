class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        my = set()
        bol = False

        for i in nums:
            if i in my:
                bol = True
            my.add(i)


                
        return bol