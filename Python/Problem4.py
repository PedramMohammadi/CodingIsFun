"""
This program takes as input an integer array and returns true if any value appears at least twice in the array, 
and return false if every element is distinct.

"""

def containsDuplicate(nums):
    s = set(nums)
    if (len(s) == len(nums)):
        return False
    return True

def main():
    nums = [1,1,1,3,3,4,3,2,4,2]
    result = containsDuplicate(nums)
    print(result)

if __name__ == "__main__":
    main()