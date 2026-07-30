class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        unordered_map<int, vector<int>> mp;

        // Group numbers by their distance from x
        for (int a : arr)
        {
            mp[abs(a - x)].push_back(a);
        }

        // Convert map to vector
        vector<pair<int, vector<int>>> vec;
        for (auto &it : mp)
        {
            vec.push_back(it);
        }

        // Sort by distance
        sort(vec.begin(), vec.end(),
             [](const auto &a, const auto &b)
             {
                 return a.first < b.first;
             });

        vector<int> result;

        // Collect k elements
        for (auto &p : vec)
        {
            for (int num : p.second)
            {
                if (result.size() == k)
                    break;

                result.push_back(num);
            }

            if (result.size() == k)
                break;
        }

        // Result must be sorted
        sort(result.begin(), result.end());

        return result;
    }
};