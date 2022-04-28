# author @Onemod2

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def merge_to_lists(self, l1: ListNode, l2: ListNode):
        head = ListNode()
        tmp_head = head

        while l1 is not None and l2 is not None:
            if l1.val > l2.val:
                head.next = l2
                head = head.next
                l2 = l2.next
            else:
                head.next = l1
                head = head.next
                l1 = l1.next

        if l1 is None:
            head.next = l2
        else:
            head.next = l1

        answer = tmp_head.next
        del tmp_head

        return answer

    def merge_k_lists_local(self, lists, l: int, r: int):
        if l == r:
            return lists[l]

        m = int((r + l) / 2)

        l1 = self.merge_k_lists_local(lists, l, m)
        l2 = self.merge_k_lists_local(lists, m + 1, r)

        return self.merge_to_lists(l1, l2)

    def merge_k_lists(self, lists):
        if len(lists) == 0:
            return None
        return self.merge_k_lists_local(lists, 0, len(lists) - 1)


""" 
Condition:
You are given an array of k linked-lists lists, each linked-list is sorted in
ascending order.
Merge all the linked-lists into one sorted linked-list and return it.
"""

if __name__ == "__main__":
    pass

# Input: lists = [[1,4,5],[1,3,4],[2,6]]
# Output: [1,1,2,3,4,4,5,6]
# Input: lists = []
# Output: []
# lists = [[]]
# Output: []
