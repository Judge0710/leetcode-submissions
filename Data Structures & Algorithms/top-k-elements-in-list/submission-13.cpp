class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> count ;
        for (int num : nums)
        {
            count[num]++;
        }
        vector<vector<int>> freq(nums.size() + 1);
        for (auto &[num , cnt] : count)
        {
            freq[cnt].push_back(num);
        }
        
        vector<int> res ;

        for (int i = freq.size()-1 ; i > 0 ; i--)
        {
            for (int n : freq[i])
            {
                if (res.size()== k)
                {
                    return res ;
                }
                res.push_back(n);
            }
            
        }
        return res;
    }
};
