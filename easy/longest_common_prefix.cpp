// author @Onemod2

#include <string>
#include <vector>
using std::max;
using std::min;
using std::string;
using std::vector;

class Solution {
public:
  string common_str(string &f, string &s) {
    string tmp = "";
    for (size_t i = 0; i < min(f.size(), s.size()); ++i) {
      if (f[i] == s[i]) {
        tmp += f[i];
      } else {
        break;
      }
    }
    return tmp;
  }

  string longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0)
      return 0;

    string min_s = strs[0];
    string max_s = strs[0];

    for (size_t i = 0; i < strs.size(); ++i) {
      if (strs[i] > max_s)
        max_s = strs[i];
      if (strs[i] < min_s)
        min_s = strs[i];
    }

    return common_str(min_s, max_s);
  }
};

/* Condition:
 *
 * Write a function to find the longest common prefix string amongst an array of
 * strings.
 * If there is no common prefix, return an empty string "".
 **/

int main() {
  // Input: strs = ["flower","flow","flight"]
  // Output: "fl"

  // Input: strs = ["dog","racecar","car"]
  // Output: ""

  // Input:
  // Output:

  return 0;
}