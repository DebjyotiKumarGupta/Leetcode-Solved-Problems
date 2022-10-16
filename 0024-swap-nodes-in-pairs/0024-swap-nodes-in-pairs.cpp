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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
         ListNode *first=head;   
        ListNode *second=head->next;
        while(second!=NULL && second->next!=NULL){
            swap(first->val,second->val);
            first=first->next->next;
            second=second->next->next;
        }
        if(second!=NULL){
            swap(first->val,second->val);
        }
        return head;

    }
};