class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        d={}
        res=0
        for i in nums:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for i in nums:
            if d[i]==1:
                res=i
        return res