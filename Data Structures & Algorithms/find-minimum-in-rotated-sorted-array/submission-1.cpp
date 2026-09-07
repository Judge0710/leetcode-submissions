class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int ans = INT_MAX ;
        for (int num : nums)
        {
            if (ans > num)
            {
                ans = num ;
            }
        }
        return ans ;
    }
};
