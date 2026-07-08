class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> result ;
        unordered_map<int , int> values ;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            values[nums[i]]++ ;
        }
        vector<pair<int,int>> valuesDes ;
        for (const auto&p : values)
        {
            valuesDes.push_back({p.second,p.first});
        }
        sort(valuesDes.rbegin(),valuesDes.rend());
        
        vector<int> res;
        for (int j = 0 ; j < k ; j++)
        {
            res.push_back(valuesDes[j].second);
        }
        return res;
        
    }
};
