// author @Onemod2

class Solution {
public:
  string longestPalindrome(string s) {
    int in_l = 0, in_r = 0, max_l = 0, c_l, c_r;
    for (int i = 0; i < s.size() - 1; ++i) {
      c_l = i, c_r = i;

      while (c_l - 1 >= 0 && c_r + 1 < s.size() && s[c_l - 1] == s[c_r + 1]) {
        c_l--;
        c_r++;
      }

      if (c_r - c_l + 1 > max_l) {
        max_l = c_r - c_l + 1;
        in_l = c_l;
        in_r = c_r;
      }

      if (s[i] == s[i + 1]) {
        c_l = i, c_r = i + 1;
        while (c_l - 1 >= 0 && c_r + 1 < s.size() && s[c_l - 1] == s[c_r + 1]) {
          c_l--;
          c_r++;
        }
        if (c_r - c_l + 1 > max_l) {
          max_l = c_r - c_l + 1;
          in_l = c_l;
          in_r = c_r;
        }
      }
    }

    string ans = "";
    for (size_t i = in_l; i <= in_r; ++i) {
      ans += s[i];
    }

    return ans;
  }
};

/* Condition:
 *
 * Given a string s, return the longest palindromic substring in s.
 **/

int main() {
  // Input: s = "babad"
  // Output: "bab"

  // Input: s = "cbbd"
  // Output: "bb"

  // Input:
  // Output:

  return 0;
}