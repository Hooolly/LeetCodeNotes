# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if l1 == None and l2 == None:
            return None
        if l1 == None:
            return l2
        if l2 == None:
            return l1
        q = ListNode(-1)
        p = q 
        flag = 0
        p1 = l1
        p2 = l2
        while p1 != None and p2 != None:
            temp = ListNode(p1.val + p2.val + flag)
            if temp.val >=10:
                temp.val = temp.val%10
                flag = 1
            else:
                flag = 0
            p.next = temp
            p = p.next
            if flag == 1 and p1.next == None and p2.next == None:
                t = ListNode(1)
                p.next = t
            p1 = p1.next
            p2 = p2.next
        while p1!=None:
            p1.val=p1.val+flag
            if p1.val>=10:
                p1.val=p1.val%10
                flag=1
            else:
                flag=0
            p.next=p1
            p=p.next
            if flag==1 and p1.next==None:
                t=ListNode(1)
                p.next=t
                break
            p1=p1.next
        while p2 != None:
            p2.val = p2.val +flag
            if p2.val >= 10:
                p2.val = p2.val%10
                flag = 1
            else:
                flag = 0
            p.next = p2
            p = p.next
            if flag == 1 and p2.next == None:
                t = ListNode(1)
                p.next = t
                break
            p2 = p2.next
        return q.next
