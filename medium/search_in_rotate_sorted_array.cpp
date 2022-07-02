// author @Onemod2
#include <vector>
using namespace std;
class Solution {
public:
    int lbs(int key, vector<int>& m) {
      if (m.size() <= 1) { return 0; }
      int mid, l = 0, r = m.size() - 1;
      while (l < r) { // find index of smallest element
        mid = (l+r)/2;
        if (m[mid] > m[r]) {
          l = mid+2;
        }
        else {
          r = mid;
        }
      }
      int ind_of_smallest = l;
      l = 0, r = m.size() - 1;
      if (m[r] >= key) { // define part of mas, where to search key
        l = ind_of_smallest;
      }
      else {
        r = ind_of_smallest - 1;
      }
      while (l < r) { // common lbs
        mid = (l+r)/2;
        if (m[mid] >= key) {
          r = mid;
        }
        else {
          l = mid+1;
        }
      }
      return l;
    }
    int search(vector<int>& nums, int target) {
      int index = lbs(target, nums);
      if (nums[index] != target) {
        return -1; 
      }
      return index;
    }
};

/* Condition: 
 *
 * There is an integer array nums sorted in ascending order (with distinct 
 * values). 
 * Prior to being passed to your function, nums is possibly rotated at an 
 * unknown pivot index k (1 <= k < nums.length) such that the resulting array is 
 * [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] 
 * (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 
 * and become [4,5,6,7,0,1,2]. 
 * Given the array nums after the possible rotation and an integer target, 
 * return the index of target if it is in nums, or -1 if it is not in nums. 
 * You must write an algorithm with O(log n) runtime complexity. 
 **/

int main() {
  // Input: nums = [4,5,6,7,0,1,2], target = 0
  // Output: 4

  // Input: nums = [4,5,6,7,0,1,2], target = 3
  // Output: -1

  // Input: nums = [1], target = 0
  // Output: -1

  return 0;
}
