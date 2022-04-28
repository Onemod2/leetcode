// author @Onemod2

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
  void swap_neiborhood(ListNode *prev, ListNode *current) {
    if (!current->next) {
      return;
    }

    ListNode *next = current->next;
    if (prev) {
      prev->next = next;
    }

    current->next = next->next;
    next->next = current;
  }

  ListNode *swapPairs(ListNode *head) {
    if (!head || !(head->next)) {
      return head;
    }

    ListNode *new_head = head->next;
    ListNode *prev = nullptr;
    ListNode *current = head;

    while (current) {
      swap_neiborhood(prev, current);
      prev = current;
      current = current->next;
    }

    return new_head;
  }
};

/* Condition:
 *
 * Given a linked list, swap every two adjacent nodes and return its head. You
 * must solve the problem without modifying the values in the list's nodes
 * (i.e., only nodes themselves may be changed.)
 **/

int main() {
  // Input: head = [1,2,3,4]
  // Output: [2,1,4,3]

  // Input: head = []
  // Output: []

  // Input: head = [1]
  // Output: [1]

  return 0;
}