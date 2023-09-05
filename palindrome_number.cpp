// 2 ways of due
#include <string>
using std::string, std::to_string;

// My solution
class Solution {
public:
    /*string reverse_string(string s) {
        string
    } */ // to the most efficient but should have a function for maintenance
    bool isPalindrome(int x) {
        /*if (x < 0) 
            return false;*/ // no need for string-type solution
        
        string s = to_string(x);
        for(int i = 0; i < s.length()/2; i++) {
            if(s[i] != s[s.length() - 1 - i]) {
                return false;
            }
        }

    return true;
    }
};


// the fast one
class Solution1 {
 public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;

    long reversed = 0;
    int y = x;

    while (y) {
      reversed = reversed * 10 + y % 10;
      y /= 10;
    }

    return reversed == x;
  }
};