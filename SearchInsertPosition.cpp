// Author: Mohit Bhatia

// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int position = 0;
        for(int i =  0; i < nums.size(); i++) {
            if(target == nums[i]) return position;
            else if (target < nums[i]) return position;
            position++;
        } 
        return position;
    }
};
