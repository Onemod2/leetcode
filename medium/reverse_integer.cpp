// author @Onemod2
#include <climits>

class Solution {
public:
  int reverse(int x) {
    int rev = 0;

    while (x != 0) {
      int tmp = x % 10;
      x /= 10;

      if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && x > 7))
        return 0;
      if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && x < -8))
        return 0;

      rev = rev * 10 + tmp;
    }

    return rev;
  }
};

/* Condition:
 *
 * Given a signed 32-bit integer x, return x with its digits reversed. If
 * reversing x causes the value to go outside the signed 32-bit integer range
 * [-2^31, 2^31 - 1], then return 0.
 * Assume the environment does not allow you to store 64-bit integers (signed or
 * unsigned).
 **/

int main() {
  // Input: x = 123
  // Output: 321

  // Input: x = -123
  // Output: -321

  // Input: x = 120
  // Output: 21

  return 0;
}