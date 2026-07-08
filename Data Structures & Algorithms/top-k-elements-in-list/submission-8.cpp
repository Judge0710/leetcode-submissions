class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> count ;
        vector<vector<int>> bucket(nums.size() + 1); ;
        vector<int> res ;

        for (int num : nums)
        {
            count[num]++ ;
        }

        for (const auto &p : count)
        {
            bucket[p.second].push_back(p.first) ;
        }

        for (int i = bucket.size()-1 ; i >= 0 ; i--)
        {
            for (int push : bucket[i])
            {
                res.push_back(push);
            }
            if (res.size() == k)
            {
                return res;
            }
        }
        
    }
};
