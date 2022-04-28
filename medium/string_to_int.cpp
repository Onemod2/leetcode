// author @Onemod2

#include <climits>

class Solution {
public:
  int myAtoi(string s) {
    int value = 0, i = 0, n = s.size();
    bool is_neg = false;

    while (i != n && s[i] == ' ') {
      i++;
    }
    if (i != n && s[i] == '-') {
      is_neg = true;
      i++;
    }
    if (!is_neg && i != n && s[i] == '+') {
      i++;
    }

    while (i != n && int(s[i]) >= 48 && int(s[i]) <= 57) {
      int tmp = int(s[i] - '0');
      if (!is_neg) {
        if (INT_MAX / 10 < value || (INT_MAX / 10 == value && tmp > 7)) {
          value = INT_MAX;
          break;
        }
      } else {
        tmp = -tmp;
        if (INT_MIN / 10 > value || (INT_MIN / 10 == value && tmp <= -8)) {

          value = INT_MIN;
          break;
        }
      }
      value = value * 10 + tmp;
      i++;
    }

    return value;
  }
};

/* Condition:
 *
 * Implement the myAtoi(string s) function, which converts a string to a 32-bit
 * signed integer (similar to C/C++'s atoi function).
 * The algorithm for myAtoi(string s) is as follows:
 * Read in and ignore any leading whitespace.
 * Check if the next character (if not already at the end of the string) is '-'
 * or '+'. Read this character in if it is either. This determines if the final
 * result is negative or positive respectively. Assume the result is positive if
 * neither is present.
 * Read in next the characters until the next non-digit character or the end of
 * the input is reached. The rest of the string is ignored.
 * Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no
 * digits were read, then the integer is 0. Change the sign as necessary (from
 * step 2).
 * If the integer is out of the 32-bit signed integer range [-231, 231 - 1],
 * then clamp the integer so that it remains in the range. Specifically,
 * integers less than -2^31 should be clamped to -2^31, and integers greater
 *than 2^31 - 1 should be clamped to 2^31 - 1. Return the integer as the final
 *result.
 **/

int main() {
  // Input:
  // Output:

  // Input:
  // Output:

  // Input:
  // Output:

  return 0;
}