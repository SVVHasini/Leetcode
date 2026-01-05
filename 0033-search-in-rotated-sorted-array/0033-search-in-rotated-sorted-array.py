class Solution(object):
    def search(self, nums, target):
        l,h=0,len(nums)-1
        while l<=h:
            m=(l+h)//2
            if nums[m]==target:
                return m
            # check if sorted at left side
            if nums[l] <= nums[m]:
                if nums[l] <= target < nums[m]:
                    h = m - 1
                else:
                    l = m + 1
            #otherwise right is sorted or not
            else:
                if nums[m]<target<=nums[h]:
                    l=m+1
                else:
                    h=m-1
        return -1