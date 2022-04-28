// author @Onemod2
#include <algorithm>
#include <string>
#include <vector>

using std::max;
using std::min;
using std::string;
using std::vector;

class Solution {
public:
  void rearregment(vector<string> &a, string current, const string &digits) {
    if (current.size() == digits.size()) {
      if (current != "")
        a.push_back(std::move(current));
      return;
    }
    string tmp;

    switch (digits[current.size()]) {
    case '2':
      tmp = "abc";
      break;
    case '3':
      tmp = "def";
      break;
    case '4':
      tmp = "ghi";
      break;
    case '5':
      tmp = "jkl";
      break;
    case '6':
      tmp = "mno";
      break;
    case '7':
      tmp = "pqrs";
      break;
    case '8':
      tmp = "tuv";
      break;
    case '9':
      tmp = "wxyz";
      break;
    };

    for (size_t i = 0; i < tmp.size(); ++i) {
      rearregment(a, current + tmp[i], digits);
    }
  }

  vector<string> letterCombinations(string digits) {
    vector<string> ans;
    rearregment(ans, "", digits);

    return ans;
  }
};

/* Condition:
 *
 * Given a string containing digits from 2-9 inclusive, return all possible
 * letter combinations that the number could represent. Return the answer in any
 * order.
 * A mapping of digit to letters (just like on the telephone buttons) is given
 * below. Note that 1 does not map to any letters.
 **/

int main() {
  // Input: digits = "23"
  // Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

  // Input: digits = ""
  // Output: []

  // Input: digits = "2"
  // Output: ["a","b","c"]

  return 0;
}