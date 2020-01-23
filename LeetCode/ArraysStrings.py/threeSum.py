# Three Sum question:
# Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? 
# Find all unique triplets in the array which gives the sum of zero.
# (The solution set must not contain duplicate triplets.)

# Given array nums = [-1, 0, 1, 2, -1, -4],

# A solution set is:
# [
#   [-1, 0, 1],
#   [-1, -1, 2]
# ]

class Solution(object):
	def threeSum(self, nums):
        # Create a list to store the solution 
		res = []
        # sort the list of nums in ascending order 
		nums.sort()
		length = len(nums)
		for i in xrange(length-2): #[8]
			if nums[i]>0: break #[7]
			if i>0 and nums[i]==nums[i-1]: continue #[1]

			l, r = i+1, length-1 #[2]
			while l<r:
				total = nums[i]+nums[l]+nums[r]

				if total<0: #[3]
					l+=1
				elif total>0: #[4]
					r-=1
				else: #[5]
					res.append([nums[i], nums[l], nums[r]])
					while l<r and nums[l]==nums[l+1]: #[6]
						l+=1
					while l<r and nums[r]==nums[r-1]: #[6]
						r-=1
					l+=1
					r-=1
		return res

# The main idea is to iterate every number in nums.
# We use the number as a target to find two other numbers which make total zero.
# For those two other numbers, we move pointers, l and r, to try them.

# l start from left to right.
# r start from right to left.

# First, we sort the array, so we can easily move i around and know how to adjust l and r.
# If the number is the same as the number before, we have used it as target already, continue. [1]
# We always start the left pointer from i+1 because the combination of 0~i has already been tried. [2]

# Now we calculate the total:
# If the total is less than zero, we need it to be larger, so we move the left pointer. [3]
# If the total is greater than zero, we need it to be smaller, so we move the right pointer. [4]
# If the total is zero, bingo! [5]
# We need to move the left and right pointers to the next different numbers, so we do not get repeating result. [6]

# We do not need to consider i after nums[i]>0, since sum of 3 positive will be always greater than zero. [7]
# We do not need to try the last two, since there are no rooms for l and r pointers.
# You can think of it as The last two have been tried by all others. [8]

# For time complexity
# Sorting takes O(NlogN)
# Now, we need to think as if the nums is really really big
# We iterate through the nums once, and each time we iterate the whole array again by a while loop
# So it is O(NlogN+N^2)~=O(N^2)

# For space complexity
# We didn't use extra space except the res
# So it is O(1).