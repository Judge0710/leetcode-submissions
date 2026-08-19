class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rowStart = 0;
        int rowEnd = matrix.size() - 1;

        int colStart = 0;
        int colEnd = matrix[0].size() - 1;

        // Find possible row
        while (rowStart <= rowEnd)
        {
            int rowMid = rowStart + (rowEnd - rowStart) / 2;

            if (matrix[rowMid][colStart] == target)
            {
                return true;
            }
            else if (matrix[rowMid][colStart] > target)
            {
                rowEnd = rowMid - 1;
            }
            else
            {
                rowStart = rowMid + 1;
            }
        }

        // rowEnd is now the possible row
        if (rowEnd < 0)
            return false;

        // Binary search inside the row
        int row = rowEnd;

        int left = 0;
        int right = colEnd;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target)
                return true;
            else if (matrix[row][mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};