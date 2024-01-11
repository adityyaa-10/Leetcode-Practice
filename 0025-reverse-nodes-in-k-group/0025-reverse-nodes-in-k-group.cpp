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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base Case
        if (head == nullptr) {
            return nullptr;
        }

        // Check if there are at least k nodes remaining
        ListNode* checkNode = head;
        for (int i = 0; i < k; ++i) {
            if (checkNode == nullptr) {
                return head; // Less than k nodes remaining, no reversal needed
            }
            checkNode = checkNode->next;
        }

        // Reverse first K nodes
        ListNode* forward = nullptr;
        ListNode* current = head;
        ListNode* prev = nullptr;
        int count = 0;

        while (current != nullptr && count < k) {
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
            count++;
        }

        // Recursive Call on the remaining list
        if (forward != nullptr) {
            head->next = reverseKGroup(forward, k);
        }

        // Return new list
        return prev;
    }
};
