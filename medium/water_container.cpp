// author @Onemod2

#include <climits>
#include <vector>
using std::max;
using std::min;
using std::vector;

class Solution {
public:
  int maxArea(vector<int> &height) {
    int l = 0, r = height.size() - 1;
    int max_area = INT_MIN;
    while (l < r) {
      int tmp_area = min(height[l], height[r]) * (r - l);
      max_area = max(max_area, tmp_area);
      if (height[l] > height[r]) {
        r--;
      } else {
        l++;
      }
    }
    return max_area;
  }
};

/* Condition:
 *
 * You are given an integer array height of length n. There are n vertical lines
 * drawn such that the two endpoints of the ith line are (i, 0) and (i,
 * height[i]).
 * Find two lines that together with the x-axis form a container, such that the
 * container contains the most water.
 * Return the maximum amount of water a container can store.
 * Notice that you may not slant the container.
 **/

int main() {
  // Input: height = [1,8,6,2,5,4,8,3,7]
  // Output: 49

  // Input: height = [1,1]
  // Output: 1

  // Input:
  // Output:

  return 0;
}