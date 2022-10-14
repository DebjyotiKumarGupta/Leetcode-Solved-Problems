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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        if(head==NULL) return NULL;
        if(n==1 &&head->next==NULL){
          head=head->next;  
            return head;
        } 
        for(ListNode* p =head;p!=NULL;p=p->next){
            count++;
        }
        if(count==n){
            head=head->next;
            return head;
        }
        ListNode* temp= head;
      for(int i=0;i<count-n-1;i++){
          temp=temp->next;
      }
        temp->next=temp->next->next;
        // *temp =*temp->next;
        return head;
    }
};