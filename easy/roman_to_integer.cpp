// author @Onemod2

#include <string>
using std::string;

class Solution {
public:
  int romanToInt(string s) {
    int sum = 0;
    int prev = 0;

    for (size_t i = 0; i < s.size(); ++i) {
      switch (s[i]) {
      case 'I':
        sum += 1;
        prev = 1;
        break;
      case 'V':
        sum += 5;
        if (prev < 5) {
          sum -= 2 * prev;
        }
        prev = 5;
        break;
      case 'X':
        sum += 10;
        if (prev < 10) {
          sum -= 2 * prev;
        }
        prev = 10;
        break;
      case 'L':
        sum += 50;
        if (prev < 50) {
          sum -= 2 * prev;
        }
        prev = 50;
        break;
      case 'C':
        sum += 100;
        if (prev < 100) {
          sum -= 2 * prev;
        }
        prev = 100;
        break;
      case 'D':
        sum += 500;
        if (prev < 500) {
          sum -= 2 * prev;
        }
        prev = 500;
        break;
      case 'M':
        sum += 1000;
        if (prev < 1000) {
          sum -= 2 * prev;
        }
        prev = 1000;
        break;
      }
    }

    return sum;
  }
};

/* Condition:
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 * For example, 2 is written as II in Roman numeral, just two one's added
 * together. 12 is written as XII, which is simply X + II. The number 27 is
 * written as XXVII, which is XX + V + II.
 * Roman numerals are usually written largest to smallest from left to right.
 * However, the numeral for four is not IIII. Instead, the number four is
 * written as IV. Because the one is before the five we subtract it making four.
 * The same principle applies to the number nine, which is written as IX. There
 * are six instances where subtraction is used:
 * I can be placed before V (5) and X (10) to make 4 and 9.
 * X can be placed before L (50) and C (100) to make 40 and 90.
 * C can be placed before D (500) and M (1000) to make 400 and 900.
 * Given an integer, convert it to a roman numeral.
 **/

int main() {
  // Input: s = "III"
  // Output: 3

  // Input: s = "LVIII"
  // Output: 58

  // Input: s = "MCMXCIV"
  // Output: 1994

  return 0;
}