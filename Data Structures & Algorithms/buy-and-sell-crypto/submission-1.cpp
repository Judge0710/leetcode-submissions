class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size() ;
        int ans = 0 ;
        int temp = 0 ;
        for (int i = 0 ; i < n ; i++)
        {
            for (int j = i+1 ; j < n ; j++)
            {
                temp = prices[j] - prices[i] ;
                if(temp>ans)
                {
                    ans = temp;
                }
            }
        }
        return ans;
    }
};
