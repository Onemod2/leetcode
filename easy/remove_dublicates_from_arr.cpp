// author @Onemod2
#include <cstddef>
#include <vector>

using std::vector;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (!nums.size())
      return 0;
    int current_ind = 1;

    for (size_t i = 1; i < nums.size(); ++i) {
      if (nums[i] != nums[i - 1]) {
        nums[current_ind] = nums[i];
        current_ind++;
      }
    }

    return current_ind;
  }
};

/* Condition:
 *
 * Given an integer array nums sorted in non-decreasing order, remove the
 * duplicates in-place such that each unique element appears only once. The
 * relative order of the elements should be kept the same.
 * Since it is impossible to change the length of the array in some languages,
 * you must instead have the result be placed in the first part of the array
 * nums. More formally, if there are k elements after removing the duplicates,
 * then the first k elements of nums should hold the final result. It does not
 * matter what you leave beyond the first k elements.
 * Return k after placing the final result in the first k slots of nums.
 * Do not allocate extra space for another array. You must do this by modifying
 * the input array in-place with O(1) extra memory.
 **/

int main() {
  // Input: nums = [1,1,2]
  // Output: 2, nums = [1,2,_]

  // Input: nums = [0,0,1,1,1,2,2,3,3,4]
  // Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

  // Input:
  // Output:

  return 0;
}