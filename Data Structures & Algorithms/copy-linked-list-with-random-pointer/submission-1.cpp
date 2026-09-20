class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if(!head)
        {
            return head;
        }
        Node* curr = head;
        Node* copyList = new Node(0);
        Node* ans = copyList;
        
        unordered_map<Node*, Node*> mp;

        while (curr)
        {
            copyList->val = curr->val;
            mp[curr] = copyList;

            if (curr->next)
                copyList->next = new Node(0);

            copyList = copyList->next;
            curr = curr->next;
        }

        mp[nullptr] = nullptr;

        curr = head;
        copyList = ans;

        while (curr)
        {
            copyList->random = mp[curr->random];
            copyList->next = mp[curr->next];

            curr = curr->next;
            copyList = copyList->next;
        }

        return ans;
    }
};