// Author : Mohit Bhatia

// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

class Solution {
public:
    int addDigits(int num) {
	    int sum ;
	    if (num < 10) return num;
	    while (num > 9) {
        	sum = 0;
	    	while(num != 0) {
	     		sum += num % 10;
	     		num -= num % 10;
	     		num /= 10;
	    	}
	    	num = sum;
	   }
      return sum;
    }
};
