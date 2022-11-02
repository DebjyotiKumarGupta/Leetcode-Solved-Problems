/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *curr,*clonecurr,*live;
        if(head==NULL) return head;
        for(curr=head;curr!=NULL;){
            live = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = live;
            curr=live;
        }
        
        for(curr=head;curr!=NULL;curr=curr->next->next){
            curr->next->random = (curr->random!=NULL)?curr->random->next:NULL;
        }
        Node *copy=head->next;
        live = copy;
        for(curr=head,copy=head->next;curr!=NULL && copy!=NULL;curr=curr->next,copy=copy->next){
            curr->next = curr->next?curr->next->next:curr->next;
            copy->next = copy->next?copy->next->next:copy->next;
        }
        return live;
    }
};