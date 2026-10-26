class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=nullptr;
        ListNode* current=nullptr;
        int carry=0;
         while(carry!=0 || l1!=nullptr || l2!=nullptr){
            int sum=carry;
            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
           int digit=sum%10;
           if(head==nullptr){
            head=new ListNode(digit);
            current=head;
           }
           else{
            current->next=new ListNode(digit);
            current=current->next;
           }
         }
         return head;
    }
};