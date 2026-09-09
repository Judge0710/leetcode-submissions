class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = nums.size() - 1;

        // Find the index of the smallest element
        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right])
            {
                // Minimum is on the right side
                left = mid + 1;
            }
            else
            {
                // Minimum could be mid itself
                right = mid;
            }
        }

        int cut = left;

        // If array is not rotated
        if (cut == 0)
        {
            return binarySrc(nums, 0, nums.size() - 1, target);
        }

        // Target is in the left sorted half
        if (target >= nums[0])
        {
            return binarySrc(nums, 0, cut - 1, target);
        }

        // Target is in the right sorted half
        return binarySrc(nums, cut, nums.size() - 1, target);
    }

private:
    int binarySrc(vector<int>& nums, int s, int e, int key)
    {
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == key)
            {
                return mid;
            }
            else if (nums[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        return -1;
    }
};