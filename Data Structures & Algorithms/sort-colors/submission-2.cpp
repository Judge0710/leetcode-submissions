class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int start = 0 ;
        int last = nums.size() - 1 ;
        for(int current = 0 ;current < last+1 ;)
        {
            if (nums[current] == 0)
            {
                swap(nums[current],nums[start]);
                start++ ;
                current++ ;
            }
            else if (nums[current] == 2)
            {
                swap(nums[current],nums[last]);
                last--;
            }
            else if (nums[current] == 1)
            {
                current++ ;
            }

        }
        
    }
};