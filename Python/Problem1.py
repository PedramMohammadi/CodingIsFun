"""
This code provides a solution to two sum problem:

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

"""
from collections import defaultdict

def findTwoSum(nums, target):
    seen = defaultdict(int) #Keep track of the difference
    n = len(nums)
    for i in range(n):
        remaining = target - nums[i] #difference of the target and each member of the list
        if nums[i] in seen:
            return [i, seen[nums[i]]]
        seen[remaining] = i

def main():
    nums = [3, 3]
    target = 6
    x,y = findTwoSum(nums, target)
    print([x,y])

if __name__ == "__main__":
    main()