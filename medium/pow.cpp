// author @Onemod2

class Solution {
public:
  double myPow(double x, int n) {
    double tmp = 1.0;
    bool is_neg = n < 0;
    long long tmp_n = n;
    if (is_neg) {
      tmp_n *= -1;
    }
    while (tmp_n > 0) {
      if (tmp_n % 2 == 0) {
        x = x * x;
        tmp_n /= 2;
      } else {
        tmp *= x;
        tmp_n -= 1;
      }
    }
    if (is_neg) {
      return 1 / tmp;
    } else {
      return tmp;
    }
  }
};

/* Condition:
 *
 * Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
 **/

int main() {
  // Input: x = 2.00000, n = 10
  // Output: 1024.00000

  // Input: x = 2.10000, n = 3
  // Output: 9.26100

  // Input: x = 2.00000, n = -2
  // Output: 0.25000

  return 0;
}