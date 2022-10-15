/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode(0);
        ListNode *curr=ans;
        int n=0,carry=0;
        while(l1&&l2){
            n=l1->val+l2->val+carry;
            curr->next=new ListNode(n%10);
            if(n/10>0) carry=1;
            else carry=0;
            l1=l1->next;
            l2=l2->next;
            curr=curr->next;
        }
        while(l1){
            n=l1->val+carry;
            curr->next=new ListNode(n%10);
            if(n/10>0) carry=1;
            else carry=0;
            l1=l1->next;
            curr=curr->next;
        }
        while(l2){
             n=l2->val+carry;
            curr->next=new ListNode(n%10);
            if(n/10>0) carry=1;
            else carry=0;
            l2=l2->next;
            curr=curr->next;
        }
        if(carry==1) curr->next=new ListNode(carry);
        return ans->next;
    }
};