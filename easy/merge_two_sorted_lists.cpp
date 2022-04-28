// author @Onemod2

#include <cstddef>
/**
 * Definition for singly-linked list.
 */
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr)
      return l2;
    if (l2 == nullptr)
      return l1;

    ListNode *head, *head_cpy;

    if (l1->val > l2->val) {
      head = l2;
      head_cpy = l2;
      l2 = l2->next;
    } else {
      head = l1;
      head_cpy = l1;
      l1 = l1->next;
    }

    while (l1 != nullptr && l2 != nullptr) {
      if (l1->val > l2->val) {
        head->next = l2;
        l2 = l2->next;
      } else {
        head->next = l1;
        l1 = l1->next;
      }

      head = head->next;
    }

    head->next = l1 ? l1 : l2;

    return head_cpy;
  }
};

/* Condition:
 *
 * You are given the heads of two sorted linked lists list1 and list2.
 * Merge the two lists in a one sorted list. The list should be made by splicing
 * together the nodes of the first two lists.
 * Return the head of the merged linked list.
 **/

int main() {
  // Input: list1 = [1,2,4], list2 = [1,3,4]
  // Output: [1,1,2,3,4,4]

  // Input: list1 = [], list2 = []
  // Output: []

  // Input: list1 = [], list2 = [0]
  // Output: [0]

  return 0;
}