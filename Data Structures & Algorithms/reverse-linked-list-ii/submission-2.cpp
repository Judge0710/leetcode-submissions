class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        int temp = 1;

        ListNode* startIndex = head;

        // Reach left
        while (temp < left)
        {
            startIndex = startIndex->next;
            temp++;
        }

        ListNode* endIndex = startIndex;

        // Reach right
        while (temp < right)
        {
            endIndex = endIndex->next;
            temp++;
        }

        // Save connection points
        ListNode* joinIndex1 = startIndex;
        ListNode* joinIndex2 = endIndex->next;

        // Find node before left
        ListNode* before = nullptr;

        if (left > 1)
        {
            before = head;

            while (before->next != startIndex)
            {
                before = before->next;
            }
        }

        // Reverse
        ListNode* prev = joinIndex2;

        while (startIndex != joinIndex2)
        {
            ListNode* next = startIndex->next;

            startIndex->next = prev;
            prev = startIndex;
            startIndex = next;
        }

        // Reconnect
        if (before != nullptr)
            before->next = prev;
        else
            head = prev;

        return head;
    }
};