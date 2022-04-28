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
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *new_head = head;

    int size = 0;
    while (head != nullptr) {
      head = head->next;
      size++;
    }
    head = new_head;

    ListNode *prev = head;
    for (size_t i = 0; i < size - n; ++i) {
      prev = head;
      head = head->next;
    }
    prev->next = head->next;
    new_head = new_head == head ? head->next : new_head;
    delete head;

    return new_head;
  }
};

/* Condition:
 *
 * Given the head of a linked list, remove the nth node from the end of the list
 * and return its head.
 **/

int main() {
  // Input: head = [1,2,3,4,5], n = 2
  // Output: [1,2,3,5]

  // Input: head = [1], n = 1
  // Output: []

  // Input: head = [1,2], n = 1
  // Output: [1]

  return 0;
}