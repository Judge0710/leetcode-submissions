class Solution {
public:
    int mySqrt(int x) 
    {
        if (x < 2) return x;
        int s = 0 ;
        int e = x ;
        long long mid ;
        int ans = 0;
        while (s <= e)
        {
            mid = s + (1LL*e-s)/2 ;
            if (mid*mid == x)
            {
                return mid ;
            }
            else if ( mid*mid > x)
            {
                e = mid - 1;
            }
            else
            {
                ans = mid;
                s = mid+1 ;
            }
        }
        return ans ;        
    }
};