/*
This code takes a vector of integers, and returns the indices of the two numbers
that add up to a given target
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector <int> &nums, int);

int main()
{
    int target {11};
    vector <int> nums = {1,3,7,9,2};
    vector indices = twoSum(nums, target);
    cout << indices[0] << '\t' << indices[1] << endl;
}

/*
The brute force solution:
*/

vector <int> twoSum(vector <int> &nums, int target)
{
    vector <int> result;
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = i+1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    
    result.push_back(-1);
    result.push_back(-1);
    return result;
}