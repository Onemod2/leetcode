// author @Onemod2
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using std::max;
using std::min;
using std::set;
using std::string;
using std::vector;

class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    vector<vector<int>> ans;
    if (nums.size() < 4) {
      return ans;
    }

    set<vector<int>> unique;
    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size() - 3; ++i) {
      for (size_t j = i + 1; j < nums.size() - 2; ++j) {
        int l = j + 1, r = nums.size() - 1;

        while (l < r) {
          long long tmp = (long long)nums[i] + (long long)nums[j] +
                          (long long)nums[l] + (long long)nums[r];
          if (tmp < target) {
            l++;
          } else if (tmp > target) {
            r--;
          } else {
            unique.insert({nums[i], nums[j], nums[l], nums[r]});
            l++;
            r--;
          }
        }
      }
    }

    for (auto vec : unique) {
      ans.push_back(std::move(vec));
    }

    return ans;
  }
};

/* Condition:
 *
 * Given an array nums of n integers, return an array of all the unique
 * quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
 * 0 <= a, b, c, d < n
 * a, b, c, and d are distinct.
 * nums[a] + nums[b] + nums[c] + nums[d] == target
 * You may return the answer in any order.
 **/
int main() {
  // Input: nums = [1,0,-1,0,-2,2], target = 0
  // Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

  // Input: nums = [2,2,2,2,2], target = 8
  // Output: [[2,2,2,2]]

  // Input:
  // Output:

  return 0;
}