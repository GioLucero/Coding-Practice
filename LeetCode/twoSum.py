# Given an array of integers, return indices of the two numbers such that they add up to a specific target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# Example: Given nums = [2, 7, 11, 15], target = 9,

# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].



# step 1: iterate through the array to find 2 ints that == 17
    # create a for loop 
    # 1 for loop for i, and another for j

# step 2: find the sum of two values to determine if both == 17

# step 3: return ints 

nums = [1, 2, 4, 7, 10] 
target = 17

def twoSum(nums, target):
    for i in range(len(nums) - 1):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target: 
                print(nums[i], nums[j]) # if both indices equal the target, print out both indices
                return True
        return False
