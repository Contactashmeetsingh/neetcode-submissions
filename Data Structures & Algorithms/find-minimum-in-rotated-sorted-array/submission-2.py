class Solution:
    def findMin(self, nums: List[int]) -> int:
        begin = 0;
        end = len(nums)-1
        answer = nums[begin]

        while begin <= end:
            if nums[begin] < nums[end]:
                answer = min(nums[mid],answer)
                break

            mid = (begin + end) // 2
            answer = min(nums[mid],answer)

            print(nums[mid])
            if nums[mid]>nums[begin]:
                begin = mid + 1
            else:
                end = mid - 1
        return answer
