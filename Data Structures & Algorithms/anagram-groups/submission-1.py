class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mappy = defaultdict(list)
        ma= List[List[str]]
        for s in strs:
            sorty = sorted(s)
            sorted_r = ''.join(sorty)

            mappy[sorted_r].append(s)

        
        return list(mappy.values())


                
