// Given an array of integers, find if the array contains any duplicates. 
// Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int len = nums.size();
        for(int i = 0; i < len;i++){
            if(s.find(nums[i]) == s.end()) {
                s.insert(nums[i]);
            }
            else return true;
        }
        return false;
    }
};
