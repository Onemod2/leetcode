// author @Onemod2
#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
  int strStr(string haystack, string needle) {
    if (haystack.size() < needle.size())
      return -1;
    if (haystack.size() == 0 || needle.size() == 0)
      return 0;

    vector<int> p(needle.size() + 1);
    int k;
    p[0] = -1;

    for (size_t i = 1; i <= needle.size(); ++i) {
      k = p[i - 1];
      while (k >= 0) {
        if (needle[k] == needle[i - 1]) {
          break;
        }
        k = p[k];
      }
      p[i] = k + 1;
    }

    k = 0;
    for (size_t i = 0; i < haystack.size(); ++i) {
      while (k >= 0) {
        if (haystack[i] == needle[k]) {
          break;
        }
        k = p[k];
      }
      k++;
      if (k == needle.size())
        return i - k + 1;
    }

    return -1;
  }
};

/* Condition:
 *
 * Implement strStr().
 * Given two strings needle and haystack, return the index of the first
 * occurrence of needle in haystack, or -1 if needle is not part of haystack.
 * Clarification:
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 *
 **/
int main() {
  // Input: haystack = "hello", needle = "ll"
  // Output: 2

  // haystack = "aaaaa", needle = "bba"
  // Output: -1

  // Input:
  // Output:

  return 0;
}