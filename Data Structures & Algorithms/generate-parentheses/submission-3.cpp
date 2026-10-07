class Solution 
{
    vector<string> res;
    string stack;
public:
    void backtrack(int openN, int closedN, int n) 
    {
        if (openN == closedN && openN == n) 
        {
            res.push_back(stack);
            return;
        }

        if (openN < n) {
            stack += '(';
            backtrack(openN + 1, closedN, n);
            stack.pop_back();
        }
        if (closedN < openN) {
            stack += ')';
            backtrack(openN, closedN + 1, n);
            stack.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) 
    {

        backtrack(0, 0, n);
        return res;
    }
};