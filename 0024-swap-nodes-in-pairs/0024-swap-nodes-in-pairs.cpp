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
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* dummy = new ListNode;
        dummy->next = head;
        
        ListNode* ans = head->next;
        
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* forward = head->next;
        while(curr != NULL && forward!=NULL)
        {
            prev->next = forward;
            curr->next = forward->next;

            forward->next = curr;
            
            prev=curr;
            curr = curr->next;
            if(curr != NULL) 
                forward = curr->next;      
        }
        return dummy->next;
    }
};