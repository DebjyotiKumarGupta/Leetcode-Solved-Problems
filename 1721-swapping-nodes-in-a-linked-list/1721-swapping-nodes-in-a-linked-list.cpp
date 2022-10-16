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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* p=head; 
        ListNode* res=head;

        for(int i=0;i<k-1;i++){
            curr=curr->next;
            p=p->next;
        }
        while(p->next!=NULL){
            p=p->next;
            res=res->next;
        }
       swap(curr->val,res->val);
        return head;
        
        
    }
};