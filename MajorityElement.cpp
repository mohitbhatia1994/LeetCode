/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> hashmap;
        int half = nums.size() / 2;
        for(int i = 0 ; i < nums.size();i++) {
            int number = nums[i];
            if(hashmap.find(number) == hashmap.end()) {
                hashmap.insert(pair<int, int>(number,1));
            }
            else{
                hashmap[number]++;
            }
        }
        map<int, int>::iterator iter = hashmap.begin();
        for (; iter != hashmap.end(); iter++) {
             if(iter->second > half) return iter->first;
        }
        return 0;
    }
        
};
