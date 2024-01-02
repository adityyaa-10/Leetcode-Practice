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
    int middlePos(ListNode *head) {   
        int count = 0;
        while (head != NULL) {
            count++;
            head = head->next;
        }
        return count;
    }

    void deleteNode(int position, ListNode*& head) {
        if (position == 1) {
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        } else {
            ListNode *current = head;
            ListNode *prev = NULL;
            int count = 1;
            while (count < position) {
                prev = current;
                current = current->next;
                count++;
            }
            prev->next = current->next;
            current->next = NULL;
            delete current;
        }
    }

    ListNode* deleteMiddle(ListNode* head) {
        int len = middlePos(head);
        int middleLen = len / 2 + 1;
        deleteNode(middleLen, head);
        return head;
    }
};
