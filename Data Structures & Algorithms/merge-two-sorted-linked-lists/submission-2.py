# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        res = ListNode()
        curr = res
        i , j = list1, list2

        if i == None:
            return j
        elif j == None:
            return i
        elif i == None and j == None:
            return None

        while i!= None and j != None:
            print(i.val and j.val)
            if i.val <= j.val:
                curr.next = i
                i = i.next
            else:
                curr.next = j
                j = j.next

            curr= curr.next

        while i!= None:
            print(i.val )
            curr.next = i
            i = i.next
            curr= curr.next

        while j!= None:
            print(j.val)
            curr.next = j
            j = j.next
            curr= curr.next

        return res.next


