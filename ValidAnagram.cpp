// Author: Mohit Bhatia

/*
Given two strings s and t, write a function to determine if t is an anagram of s.
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        return s == t;
        
    }
};
