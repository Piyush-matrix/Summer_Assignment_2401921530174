
class Solution {
public:
       ListNode* reverse(ListNode* head){
            if(head==NULL || head->next==NULL) return head;
            ListNode* newhead =reverse(head->next);
            ListNode* front = head->next;
            front->next=head;
            head->next=NULL;
            return newhead; 
            }
    bool isPalindrome( ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead= reverse(slow->next);
        ListNode* first=head;
        ListNode*  snd=newhead;
        while(snd!=NULL){
            if(first->val!=snd->val){
            reverse(newhead);
            return false;
        }
            first=first->next;
            snd=snd->next;
        }
         reverse(newhead);
         return true;
        } 
};
