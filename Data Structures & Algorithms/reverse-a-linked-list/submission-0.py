# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head
        prevNode = None

        while node:
            nextNode = node.next
            node.next = prevNode
            prevNode = node
            node = nextNode
        return prevNode



'''
2 -> 4 -> 6

2 <- 4 <- 6
'''
