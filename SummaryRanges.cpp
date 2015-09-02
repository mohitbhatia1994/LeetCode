/*
Given a sorted integer array without duplicates, return the summary of its ranges.

For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        vector<int> v2;
        if(nums.size() == 1) {
            v.push_back(to_string(nums[0]));
        }
        
        
        else if( nums.size() > 1) {
            string s;
            for(int i = 1; i <= nums.size();i++) {
                int start = nums[i-1]; 
                int end = nums[i];
                if(end == start + 1) {
                    v2.push_back(start);
                    v2.push_back(start+1);
                }
                else{ 
                    if(v2.size() == 0) v.push_back(to_string(start));
                    else {
                        string s;
                        s = to_string(v2[0]);
                        s += "->";
                        s += to_string(v2[v2.size() - 1]); 
                        v.push_back(s);
                        v2.clear();
                        
                    }
                }
            }
            
        }
            return v;
       
    }
};
