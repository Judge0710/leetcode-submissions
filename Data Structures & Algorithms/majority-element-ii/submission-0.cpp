class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> count;
        int size = nums.size();

        for (int num : nums) {
            count[num]++;
        }

        for (const auto &p : count) {
            if (p.second > size / 3) {
                res.push_back(p.first);
            }
        }

        return res;
    }
};