class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count = 0;
        ListNode* temp = head;

        // Count nodes
        while (temp)
        {
            temp = temp->next;
            count++;
        }

        // If removing the head
        if (n == count)
        {
            return head->next;
        }

        // Move to node BEFORE the one to remove
        temp = head;
        for (int i = 1; i < count - n; i++)
        {
            temp = temp->next;
        }

        // Remove nth node from end
        temp->next = temp->next->next;

        return head;
    }
};