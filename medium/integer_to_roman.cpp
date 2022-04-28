// author @Onemod2

#include <string>
using std::string;

class Solution {
public:
  string intToRoman(int num) {
    int current = 0;
    string s = "";
    while (current != num) {
      int div = num - current;

      if (div >= 1000) {
        current += 1000;
        s += "M";
      } else if (div >= 900) {
        current += 900;
        s += "CM";
      } else if (div >= 500) {
        current += 500;
        s += "D";
      } else if (div >= 400) {
        current += 400;
        s += "CD";
      } else if (div >= 100) {
        current += 100;
        s += "C";
      } else if (div >= 90) {
        current += 90;
        s += "XC";
      } else if (div >= 50) {
        current += 50;
        s += "L";
      } else if (div >= 40) {
        current += 40;
        s += "XL";
      } else if (div >= 10) {
        current += 10;
        s += "X";
      } else if (div >= 9) {
        current += 9;
        s += "IX";
      } else if (div >= 5) {
        current += 5;
        s += "V";
      } else if (div >= 4) {
        current += 4;
        s += "IV";
      } else if (div >= 1) {
        current += 1;
        s += "I";
      }
    }
    return s;
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
  // Input: num = 3
  // Output: "III"

  // Input: num = 58
  // Output: "LVIII"

  // Input: num = 1994
  // Output: "MCMXCIV"

  return 0;
}