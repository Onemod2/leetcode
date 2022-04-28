// author @Onemod2

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;

    string s = to_string(x);
    int n = s.size();

    for (size_t i = 0; i < n / 2; ++i) {
      if (s[i] != s[n - 1 - i]) {
        return false;
      }
    }

    return true;
  }
};

/* Condition:
 *
 * Given an integer x, return true if x is palindrome integer.
 * An integer is a palindrome when it reads the same backward as forward.
 * For example, 121 is a palindrome while 123 is not.
 **/

int main() {
  // Input: x = 121
  // Output: true

  // Input: x = -121
  // Output: false

  // Input: x = 10
  // Output: false

  return 0;
}