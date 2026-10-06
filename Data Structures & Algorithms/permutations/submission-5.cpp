class Solution {
    vector<vector<int>> res;
    vector<int> perm;
    vector<bool> pick;

public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        pick.resize(nums.size(), false);
        backtrack(nums);
        return res;
    }

    void backtrack(vector<int>& nums) 
    {
        if (perm.size() == nums.size())
        {
            res.push_back(perm);
            return;
        }

        for (int i = 0; i < nums.size(); i++) 
        {
            if (!pick[i]) 
            {
                perm.push_back(nums[i]);
                pick[i] = true;

                backtrack(nums);

                perm.pop_back();
                pick[i] = false;
            }
        }
    }
};