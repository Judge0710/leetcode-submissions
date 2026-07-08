class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> count ;
        vector<vector<int>> bucket(nums.size()+1) ;
        vector<int> res;
        for (int num : nums)
        {
            count[num]++ ;
        }
        for (const auto &p : count)
        {
            bucket[p.second].push_back(p.first);
        }
        for (int j = bucket.size()-1 ; j>= 0 ; j--)
        {
            for (int push : bucket[j])
            {
                res.push_back(push);
            }
            if(res.size() == k)
            {
                break ;
            }
        }
        return res ;
    }
};
