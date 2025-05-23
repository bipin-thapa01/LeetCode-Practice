class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        firstLinkedList = []
        secondLinkedList = []
        while l1 is not None:
            firstLinkedList.append(l1.val)
            l1 = l1.next
        while l2 is not None:
            secondLinkedList.append(l2.val)
            l2 = l2.next
        num1 = num2 = 0
        for i in reversed(firstLinkedList):
            num1 = num1*10 + i
        for i in reversed(secondLinkedList):
            num2 = num2*10 + i
        sum = num1 + num2
        ans = [int(i) for i in str(sum)]
        ans = reversed(ans)
        ansList = ListNode()
        current = ansList
        for i in ans:
            current.next = ListNode(i)
            current = current.next
        return ansList.next