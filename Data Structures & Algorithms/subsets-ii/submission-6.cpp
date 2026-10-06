class Solution {
public:
    void subsets(vector<int>& nums,int i,vector<int>temp,vector<vector<int>>&ans){
        ans.push_back(temp);

        for(int k=i;k<nums.size();k++){
            if(k!=i && nums[k-1]==nums[k]) continue;

            temp.push_back(nums[k]);
            subsets(nums,k+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        sort(nums.begin(),nums.end());

        subsets(nums,0,temp,ans);

        return ans;
    }
};
