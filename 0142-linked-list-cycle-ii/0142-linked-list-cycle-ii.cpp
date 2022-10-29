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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head ,*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast) break;
        }
        if(fast==NULL || fast->next==NULL) return NULL;
        while(slow != head){
            slow=slow->next;
            head = head->next;
        }
        
       
    return head;
    }
};