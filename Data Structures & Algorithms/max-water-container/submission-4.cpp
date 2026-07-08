class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int ans = -1 ;
        int i = 0 ;
        int  j = heights.size() - 1 ;
        while(i < j)
        {
            if (((j-i)*min(heights[j],heights[i])) > ans)
            {
                ans = (j-i)*min(heights[j],heights[i]) ; 
            }
            else
            {
                if (heights[j]>heights[i])
                {
                    i++ ;
                }
                else
                {
                    j--;
                }
            }
        }
        return ans ;
        
    }
};
