class Solution 
{
    vector<vector<string>> res;
    vector<string> curr;

public:
    vector<vector<string>> partition(string s) 
    {
        dfs(s, 0);
        return res;
    }

private:
    bool isPalindrome(string &strs)
    {
        if (strs.size() == 0)
            return false;

        int s = 0;
        int l = strs.size() - 1;

        while (s <= l)
        {
            if (strs[s] != strs[l])
                return false;

            s++;
            l--;
        }

        return true;
    }

    void dfs(string &s, int start)
    {
        if (start == s.size())
        {
            res.push_back(curr);
            return;
        }

        for (int end = start; end < s.size(); end++)
        {
            string temp = s.substr(start, end - start + 1);

            if (isPalindrome(temp))
            {
                curr.push_back(temp);

                dfs(s, end + 1);

                curr.pop_back();
            }
        }
    }
};