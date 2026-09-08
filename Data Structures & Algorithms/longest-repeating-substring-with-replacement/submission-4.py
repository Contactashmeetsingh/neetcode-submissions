class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = defaultdict(int)
        res,l,r  = 0,0,0
        while r < len(s):
            count[s[r]] += 1
            maxxy = max(count.values(), default = 0)
            while (r - l + 1) - maxxy > k:
                count[s[l]] -= 1
                l+=1
            res = max(res, r - l + 1)
            r+=1

            # for i in range (l,r ,1):
            #     print(s[i])
                
            print('end')

        return res
