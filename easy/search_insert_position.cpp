// author @Onemod2
#include <vector>

using std::vector;

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int l = 0, r = nums.size();
    while (l < r) {
      int m = l + (r - l) / 2;
      if (nums[m] >= target) {
        r = m;
      } else {
        l = m + 1;
      }
    }
    return l;
  }
};

/* Condition:
 *
 * Given a sorted array of distinct integers and a target value, return the
 * index if the target is found. If not, return the index where it would be if
 * it were inserted in order.
 * You must write an algorithm with O(log n) runtime complexity.
 **/

int main() {
  // Input: nums = [1,3,5,6], target = 5
  // Output: 2

  // Input: nums = [1,3,5,6], target = 2
  // Output: 1

  // Input: nums = [1,3,5,6], target = 7
  // Output: 4

  return 0;
}