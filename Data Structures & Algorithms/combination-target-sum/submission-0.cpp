class Solution 
{ 
    vector<vector<int>> res ; 
    vector<int> curr ;
    int total ;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        dfs (0,nums,target,0);
        return res; 
    }
private :
    void dfs (int i,vector<int>& nums, int& target,int total)
    {
        if (target == total)
        {
            res.push_back(curr);
            return ;
        }
        if (i == nums.size() || total > target)
        {
            return ;
        }
        curr.push_back(nums[i]);
        dfs(i,nums,target,total+nums[i]);
        curr.pop_back();
        dfs(i+1,nums,target,total);
    }
};
