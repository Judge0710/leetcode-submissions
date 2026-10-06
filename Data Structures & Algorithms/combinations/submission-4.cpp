class Solution 
{
    vector<vector<int>> res ;
    vector<int> curr ;
public:
    vector<vector<int>> combine(int n, int k) 
    {
        dfs (1,n,k);
        return res;
    }
private:
    void dfs (int i , int n , int k)
    {
        if (curr.size() == k)
        {
            res.push_back(curr);
            return ;
        }
        if (i > n)
        {
            return ;
        }
        curr.push_back(i);
        dfs(i+1,n,k);
        curr.pop_back();
        dfs(i+1,n,k);
    }
};