// Author: Mohit Bhatia 

// Given an array of integers, every element appears twice except for one. Find that single one.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort (nums.begin(), nums.end());
        for(int i = 0; i <= nums.size(); i = i + 2) {
          if(nums[i] != nums[i+1]) {
              return nums[i];
          }  
        }
        return 0;
    }
};
