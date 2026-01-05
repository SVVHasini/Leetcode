class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d={}
        st=[]
        l=[]
        for i in range(len(nums2)-1):
            j=i+1
            while j<len(nums2) and nums2[j]<nums2[i]:
                j+=1
            if j<len(nums2) and nums2[j]>nums2[i]:
                d[nums2[i]]=nums2[j]
            else:
                d[nums2[i]]=-1
        for i in nums1:
             l.append(d.get(i, -1))
        return l