"""
This problem tries to find the maximum subarray in an integer array:

Given an integer array nums, find the subarray with the largest sum, and return its sum.

A subarray is a contiguous non-empty sequence of elements within an array.

"""

"""
#Below is the brute force solution

def maxSubArray(nums):
    n = len(nums)
    if (n == 0):
        return 0
    if (n == 1):
        return nums[0]
    largest_sum = float("-inf")
    for i in range(n):
        for j in range(i, n):
            sum_i = sum(nums[i:j+1])
            largest_sum = max(largest_sum, sum_i)
    return largest_sum 
"""

def maxSubArray(nums):
    largest_sum = float("-inf")
    sum_total = 0
    for num in nums:
        sum_total += num
        if sum_total > largest_sum:
            largest_sum = sum_total
        if sum_total < 0: #If by adding an element, the total sum decreases, we restart the summation as we're looking for the largest
            sum_total = 0
    return largest_sum

def main():
    nums = [-2,1]
    result = maxSubArray(nums)
    print(result)
if __name__ == "__main__":
    main()