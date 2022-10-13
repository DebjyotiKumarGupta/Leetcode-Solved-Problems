/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        ListNode* temp1=node->next;
        while(temp1!=NULL){
            temp->val=temp1->val;
            temp1=temp1->next;
        if(temp1==NULL) temp->next=NULL;
            temp=temp->next;
        }
    }
};