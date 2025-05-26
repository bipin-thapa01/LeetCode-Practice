class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums.sort()
        length = len(nums)
        mTerm = (length+1)/2
        if length%2 != 0:
            return float(nums[int(mTerm-1)])
        else:
            lowerTerm = floor(mTerm)
            upperTerm = ceil(mTerm)
            return float((nums[lowerTerm-1]+nums[upperTerm-1])/2)