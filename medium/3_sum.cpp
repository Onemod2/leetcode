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
  vector<vector<int>> threeSum(vector<int> &nums) {
    if (nums.size() == 0)
      return vector<vector<int>>();
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;
    int r, c;

    for (size_t l = 0; l < nums.size(); ++l) {
      if (l > 0 && nums[l] == nums[l - 1])
        continue;

      c = l + 1;
      r = nums.size() - 1;

      while (c < r) {
        if (nums[c] + nums[r] + nums[l] < 0) {
          c++;
        } else if (nums[c] + nums[r] + nums[l] > 0) {
          r--;
        } else {
          res.push_back(vector<int>{nums[l], nums[c], nums[r]});
          while (c != nums.size() - 2 && nums[c] == nums[c + 1])
            c++;
          while (r != 1 && nums[r] == nums[r - 1])
            r--;
          c++;
          r--;
        }
      }
    }
    return res;
  }
};

/* Condition:
 *
 * Given an integer array nums, return all the triplets [nums[i], nums[j],
 * nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] +
 * nums[k] == 0.
 * Notice that the solution set must not contain duplicate triplets.
 **/
int main() {
  // Input: nums = [-1,0,1,2,-1,-4]
  // Output: [[-1,-1,2],[-1,0,1]]

  // Input: nums = []
  // Output: []

  // Input: nums = [0]
  // Output: []

  return 0;
}