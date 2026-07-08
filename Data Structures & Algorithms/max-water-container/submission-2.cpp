class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int ans = -1 ;
        int temp =-1 ;
        int wide = 0 ;
        int lenght = 0 ;

        for (int i = 0 ; i < heights.size() ; i++)
        {
            for (int j = i+1 ; j < heights.size() ; j++)
            {
                wide = j - i ;
                lenght = min(heights[i] , heights[j]) ;
                temp = lenght * wide ;
                if (temp > ans)
                {
                    ans = temp ;
                }
            }
        }
        return ans ;
        
    }
};
