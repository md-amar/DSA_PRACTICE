class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        n=len(nums)
        window_avg=sum(nums[:k])
        max_avg=window_avg
        for i in range(n-k):
            window_avg=window_avg-nums[i]+nums[i+k]
            if window_avg>max_avg:
                max_avg=window_avg
        return max_avg/k  