class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* toDelete = nullptr;
        if(temp!=nullptr){
            while(temp->next!=nullptr){
                if(temp->val == temp->next->val){
                    toDelete = temp->next;
                    temp->next = temp->next->next;
                    delete toDelete;
                    continue;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};
