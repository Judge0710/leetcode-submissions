class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int , int> count ;
        vector<vector<int>> freq(nums.size() + 1);
        for (int num : nums)
        {
            count[num]++ ;
        }

        vector <pair<int,int>> countList ;

        for (const auto &p : count)
        {
            freq[p.second].push_back(p.first);
        }
        vector<int> res;
        for (int i = freq.size()-1 ; i >= 0 ; i--)
        {
            for (int push : freq[i])
            {
                res.push_back(push);
            }
            if (res.size() == k)
            {
                return res;
            }
        }


        return res;
    }
};
