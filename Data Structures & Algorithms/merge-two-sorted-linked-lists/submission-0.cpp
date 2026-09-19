class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        // Handle empty lists
        if (!list1) return list2;
        if (!list2) return list1;

        // If list2 starts smaller, it becomes the new head
        if (list2->val < list1->val)
        {
            ListNode* temp = list2;
            list2 = list2->next;
            temp->next = list1;
            list1 = temp;
        }

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while (curr1->next && curr2)
        {
            if (curr1->next->val <= curr2->val)
            {
                curr1 = curr1->next;
            }
            else
            {
                ListNode* temp = curr2;
                curr2 = curr2->next;

                temp->next = curr1->next;
                curr1->next = temp;

                curr1 = curr1->next;
            }
        }

        // Attach remaining nodes of list2
        if (curr2)
        {
            curr1->next = curr2;
        }

        return list1;
    }
};