class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            int tempTrg = target - numbers[i];
            int s = i + 1;
            int e = numbers.size() - 1;
            int index2 = -1;

            while (s <= e)
            {
                int mid = s + (e - s) / 2;

                if (numbers[mid] == tempTrg)
                {
                    index2 = mid;
                    break;
                }
                else if (tempTrg < numbers[mid])
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }

            if (index2 != -1)
            {
                return {i + 1, index2 + 1};
            }
        }

        return {};
    }
};