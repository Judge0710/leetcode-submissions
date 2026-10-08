class Solution 
{
    vector<string> res;

    vector<string> digitToChar = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

public:
    vector<string> letterCombinations(string digits) 
    {
        if (digits.empty())
            return res;

        dfs(0, digits, "");
        return res;
    }

private:
    void dfs(int i, string &digits, string currStr)
    {
        if (i == digits.size())
        {
            res.push_back(currStr);
            return;
        }

        string chars = digitToChar[digits[i] - '0'];

        for (char c : chars)
        {
            dfs(i + 1, digits, currStr + c);
        }
    }
};