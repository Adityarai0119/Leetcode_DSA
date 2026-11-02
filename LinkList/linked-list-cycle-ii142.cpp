class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect cycle
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) break;
        }

        if(fast == NULL || fast->next == NULL)
            return NULL;

        // Step 2: Find cycle starting point
        ListNode* pos = head;

        while(pos != slow) {
            pos = pos->next;
            slow = slow->next;
        }

        return pos;
    }
};