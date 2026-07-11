class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int l = 0 ;
        int r = 1 ;
        int pro = 0 ;
        int maxP = 0 ;
        while(prices.size()!= r)
        {
            if(prices[l] < prices[r])
            {
                pro = prices[r]-prices[l];
                maxP = max(pro,maxP);
            }
            else
            {
                l = r ;
            }
            r++;
        }
        return maxP;

        
    }
};
