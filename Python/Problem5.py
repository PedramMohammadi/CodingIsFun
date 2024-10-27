"""
This program takes as input an integer array nums and rotates the array to the right by k steps. 
k is non-negative.

"""

""" 
#This soultion has space and time complexity of O(n)

def rotateRight(nums, k):
    n = len(nums)
    if k >= n:
        k = k % n
    result = []
    for i in range(n):
        idx = (i + k) % n
        result.insert(idx, nums[i])
    return result 
"""

#This is a pythonic soultion with space complexity of O(1)

def rotateRight(nums, k):
    nums[:] = nums[-k : ] + nums[ : -k] #After right shift by k, the last k elements move to the front of the array and the rest of the elements move the the end.
    return nums

def main():
    nums = [-1,-100,3,99]
    k = 2
    result = rotateRight(nums, k)
    print(result)

if __name__ == "__main__":
    main()