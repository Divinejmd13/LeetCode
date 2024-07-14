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
        // Initialize two pointers
        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; ++i) {
            if (fast == nullptr) return head; // If n is larger than the length of the list
            fast = fast->next;
        }

        // If fast pointer is null, we need to remove the head node
        if (fast == nullptr) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Move both pointers until fast reaches the end
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from the end
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        return head;
    }
};
