class Solution 
{
    vector<vector<int>> res;
    vector<int> curr;

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        vector<bool> pick(nums.size(), false);

        dfs(nums, pick);

        return res;
    }

private:
    void dfs(vector<int>& nums, vector<bool>& pick)
    {
        if (nums.size() == curr.size())
        {
            res.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (pick[i])
                continue;

            if (i > 0 && nums[i] == nums[i - 1] && !pick[i - 1])
                continue;

            curr.push_back(nums[i]);
            pick[i] = true;

            dfs(nums, pick);

            curr.pop_back();
            pick[i] = false;
        }
    }
};