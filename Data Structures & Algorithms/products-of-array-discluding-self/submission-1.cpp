class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> result(nums.size(), 0);
        int temp = 1 ;

        for (int i = 0 ; i < nums.size() ; i++)
        {
            temp = 1;
            for (int j = 0 ; j < nums.size() ; j++)
            {
                if (i == j)
                {
                    continue;
                }
                temp *= nums[j];
            }
            result[i] =temp;
        }
        return result;
    }
};
