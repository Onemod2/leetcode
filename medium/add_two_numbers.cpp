// author @Onemod2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int prev = 0, tmp;
    ListNode *new_node = new ListNode(0);
    ListNode *head = new_node;

    while (l1 != nullptr || l2 != nullptr || prev != 0) {
      tmp = prev;

      if (l1) {
        tmp += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        tmp += l2->val;
        l2 = l2->next;
      }

      new_node->next = new ListNode(tmp % 10);
      prev = tmp / 10;

      new_node = new_node->next;
    }

    ListNode *tmp_node = head;
    head = head->next;
    delete tmp_node;

    return head;
  }
};

/* Condition:
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order, and each of their nodes
 * contains a single digit. Add the two numbers and return the sum as a linked
 * list.
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 **/

int main() {
  // Input: l1 = [2,4,3], l2 = [5,6,4]
  // Output: [7,0,8]

  // Input: l1 = [0], l2 = [0]
  // Output: [0]

  // Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
  // Output: [8,9,9,9,0,0,0,1]

  return 0;
}