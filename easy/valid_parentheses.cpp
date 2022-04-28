// author @Onemod2

#include <stack>
#include <string>

using std::stack;
using std::string;

class Solution {
public:
  bool isValid(string s) {
    stack<char> stck;

    for (size_t i = 0; i < s.size(); ++i) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        stck.push(s[i]);
      } else {
        if (stck.empty())
          return false;
        char ch = stck.top();

        if ((ch == '(' && s[i] != ')') || (ch == '[' && s[i] != ']') ||
            (ch == '{' && s[i] != '}')) {
          return false;
        }
        stck.pop();
      }
    }

    return stck.empty();
  }
};

/* Condition:
 *
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * An input string is valid if:
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 **/
int main() {
  // Input: s = "()"
  // Output: true

  // Input: s = "()[]{}"
  // Output: true

  // Input: s = "(]"
  // Output: false

  return 0;
}