class Solution {
public:
  bool isPalindrome(int x) {
    long y = x, temp = 0; int r;
      while(y > 0) {
        r = y % 10;
		    temp = (temp * 10) + r;
        y /= 10;
	    }
    return temp == x;
  }
};
