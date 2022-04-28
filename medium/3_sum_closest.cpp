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
  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int clossest = nums[0] + nums[1] + nums[2];

    for (size_t t = 0; t < nums.size() - 2; ++t) {
      int l = t + 1, r = nums.size() - 1;

      while (l < r) {
        int current_sum = nums[t] + nums[l] + nums[r];
        if (abs(target - current_sum) < abs(target - clossest)) {
          clossest = current_sum;
        }
        if (current_sum < target) {
          l++;
        } else {
          r--;
        }
      }
    }

    return clossest;
  }
};

/* Condition:
 *
 * Given an integer array nums of length n and an integer target, find three
 * integers in nums such that the sum is closest to target.
 * Return the sum of the three integers.
 * You may assume that each input would have exactly one solution.
 **/

int main() {
  // Input: nums = [-1,2,1,-4], target = 1
  // Output: 2

  // Input: nums = [0,0,0], target = 1
  // Output: 0

  // Input:
  // Output:

  return 0;
}