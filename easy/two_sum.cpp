// author @Onemod2

#include <algorithm>
#include <iostream>

class Solution {
public:
  vector<int> twoSum(vector<int> &v, int target) {
    int n = v.size();

    vector<int> v_copy(n);
    vector<int> answer;

    for (size_t i = 0; i < n; ++i) {
      v_copy[i] = v[i];
    }

    sort(v.begin(), v.end(), std::greater<int>());

    int j = n - 1, i = 0;

    for (; i < n; ++i) {
      while (i != j && v[i] + v[j] < target) {
        j--;
      }
      if (v[i] + v[j] == target) {
        break;
      }
    }

    for (int k = 0; k < n; ++k) {
      if (v[i] == v_copy[k]) {
        answer.push_back(k);
      } else if (v[j] == v_copy[k]) {
        answer.push_back(k);
      }
    }

    return answer;
  }
};

/* Condition:
 *
 * Given an array of integers nums and an integer target, return indices of the
 * two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * You can return the answer in any order.
 **/

int main() {
  // Input: nums = [2,7,11,15], target = 9
  // Output: [0,1]

  // Input: nums = [2,7,11,15], target = 9
  // Output: [0,1]

  // Input: nums = [3,3], target = 6
  // Output: [0,1]

  return 0;
}