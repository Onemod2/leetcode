// author @Onemod2

class Solution {
public:
  string convert(string s, int numRows) {
    int n = s.size(), step = 2 * numRows - 2, count = 0;
    string tmp = "";

    if (numRows == 1) {
      return s;
    }

    do {
      int i = count++;

      while (i < n) {
        tmp += s[i];
        if (i + step < n && count != 1 && count != numRows) {
          tmp += s[i + step];
        }

        i += 2 * numRows - 2;
      }

      step -= 2;
    } while (count != numRows);

    return tmp;
  }
};

/* Condition:
 *
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 * And then read line by line: "PAHNAPLSIIGYIR"
 **/

int main() {
  // Input: s = "PAYPALISHIRING", numRows = 3
  // Output: "PAHNAPLSIIGYIR"

  // Input: s = "PAYPALISHIRING", numRows = 4
  // Output: "PINALSIGYAHRPI"

  // Input: s = "A", numRows = 1
  // Output: "A"

  return 0;
}