class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr){
            return head;
        }
        ListNode* temp = head;
        ListNode* toDelete = nullptr;
       while(temp->val==val){
        toDelete = temp;
        if(temp->next==nullptr){
            delete temp;
            head=nullptr;
            return head;
        }
        temp = temp->next;
        delete toDelete;
       }
       head = temp;
       while(temp->next!=nullptr){
        if(temp->next->val==val){
            toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            continue;
        }
        else{
            temp = temp->next;
        }
       }
       return head;
    }
};
