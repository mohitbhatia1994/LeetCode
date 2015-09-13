//Author: Mohit Bhatia

/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

class Solution {
 
public:
    bool isValid(string s) {
        stack<char> s2;
        
        for (int i = 0; i < s.length(); i++)
        {
            char s1 = s[i];
            
            if ( s1 == '[' || s1 == '{' || s1 == '(' ) 
            {
                s2.push(s1);
            }
            
            else if (s2.empty()) { return false; }
            
            else 
            {
                if (s1 == ')' && s2.top() != '(')
            {
               return false;
            }
            
            else if (s1 == '}' && s2.top() != '{')
            {
                return false;
            }
            
            else if (s1 == ']' && s2.top() != '[')
            {
                return false;
            }
            s2.pop();
            }
        
        }
        return s2.empty();
    }
};
