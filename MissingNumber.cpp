// Author :- Mohit Bhatia

/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 0 , expected_sum = 0;
        
        bool there_is_zero = false;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];  
            expected_sum += i + 1;
            if(nums[i] == 0) there_is_zero = true;
        }
        
        if (there_is_zero == false) return 0;
        
        return expected_sum - sum;
    }
};
