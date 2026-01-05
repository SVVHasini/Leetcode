class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if not nums:
            return 0
        n=len(nums)
        maxp=nums[0]
        minp=nums[0]
        result=nums[0]
        for i in range(1,n):
            if nums[i]<0:
                minp,maxp=maxp,minp
            maxp=max(nums[i],maxp*nums[i])
            minp=min(nums[i],minp*nums[i])
            result=max(maxp,result)
        return result