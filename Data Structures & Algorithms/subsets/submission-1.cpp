class Solution 
{
    vector<vector<int>> res ;
    vector<int> temp  ;
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        dfs(nums,0);
        return res ;        
    }
private:
    void dfs(vector<int>& nums,int i)
    {
        if (i == nums.size())
        {
            res.push_back(temp);
            return;
        }
        dfs(nums,i+1);
        temp.push_back(nums[i]);
        dfs(nums,i+1);
        temp.pop_back();       
    }
};
