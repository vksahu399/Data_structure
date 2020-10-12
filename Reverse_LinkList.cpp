class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL,*curr=head,*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        head = pre;
        return head;
    }
};