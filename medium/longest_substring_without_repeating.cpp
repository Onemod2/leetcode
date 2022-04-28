// author @Onemod2

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int chars[256];
    int max_len = 0, current_l = 0;
    for (size_t i = 0; i < 256; ++i) {
      chars[i] = 0;
    }
    for (size_t i = 0; i < s.size(); ++i) {
      if (chars[int(s[i])] >= 1) {
        while (chars[int(s[i])] != 0) {
          chars[int(s[current_l])]--;
          current_l++;
        }
        chars[int(s[i])]++;
      } else {
        chars[int(s[i])]++;
        int tmp = i - current_l + 1;
        if (tmp > max_len) {
          max_len = tmp;
        }
      }
    }
    return max_len;
  }
};

/* Condition:
 *
 * Given a string s, find the length of the longest substring without repeating
 * characters.
 **/

int main() {
  // Input: s = "abcabcbb"
  // Output: 3

  // Input: s = "bbbbb"
  // Output: 1

  // Input: s = "pwwkew"
  // Output: 3

  return 0;
}