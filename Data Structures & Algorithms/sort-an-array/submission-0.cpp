class Solution {
public:

    vector<int> combineArr(vector<int> h1, vector<int> h2)
    {
        vector<int> result;

        int i = 0;
        int j = 0;

        while (i < h1.size() && j < h2.size())
        {
            if (h1[i] <= h2[j])
            {
                result.push_back(h1[i]);
                i++;
            }
            else
            {
                result.push_back(h2[j]);
                j++;
            }
        }

        while (i < h1.size())
        {
            result.push_back(h1[i]);
            i++;
        }

        while (j < h2.size())
        {
            result.push_back(h2[j]);
            j++;
        }

        return result;
    }

    vector<int> sortArray(vector<int>& nums)
    {
        if (nums.size() <= 1)
        {
            return nums;
        }

        int mid = nums.size() / 2;

        vector<int> firstHalf(nums.begin(), nums.begin() + mid);
        vector<int> secondHalf(nums.begin() + mid, nums.end());

        firstHalf = sortArray(firstHalf);
        secondHalf = sortArray(secondHalf);

        return combineArr(firstHalf, secondHalf);
    }
};