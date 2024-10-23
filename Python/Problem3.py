"""
This program takes an integer array as input and moves all the 0's 
to the end while maintaining the relative order of the non-zero elements.
The move will be done in-place without making a copy of the array.
"""

"""
#This is the brute force solution

def moveZeros(nums):
    n = len(nums)
    for i in range(n):
        for j in range(i+1, n):
            print(nums)
            if nums[i] == 0:
                temp = nums[i]
                nums[i] = nums[j]
                nums[j] = temp
"""

def moveZeros(nums):
    first_zero_index = 0
    n = len(nums)
    for i in range(n):
        if nums[i] != 0: #We keep the index of non-zero elements
            nums[i], nums[first_zero_index] = nums[first_zero_index], nums[i] 
            first_zero_index += 1 #Increment the postion of the last zero

def main():
    nums = [0,1,0,3,12]
    moveZeros(nums)
    print(nums)

if __name__ == "__main__":
    main()