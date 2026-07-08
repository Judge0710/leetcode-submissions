class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int l = 0 ;
        int r = numbers.size() - 1 ;
        vector<int> res ;
        int tempTrg = 0 ;
        while (l < r)
        {
            tempTrg = numbers[l] + numbers[r] ;
            if (tempTrg == target)   
            {
                res.push_back(l+1) ;
                res.push_back(r+1) ;
                break ;
            }
            else if (tempTrg > target)
            {
                r-- ;
            }
            else
            {
                l++ ;
            }  
        }
        return res ;
        
    }
};
