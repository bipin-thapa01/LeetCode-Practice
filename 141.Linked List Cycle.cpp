class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        if(slow == nullptr || slow->next == nullptr){
            return false;
        }
        ListNode* fast = slow->next;
        while(fast!=slow){
            if(fast->next == nullptr || fast->next->next == nullptr){
                return false;
            }
            else{
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        return true;
    }
};
