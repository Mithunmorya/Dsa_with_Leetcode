class Solution {
public:

    int maxamount(vector<int>nums,int n,int lastidx,vector<int>&dp){
        if(n > lastidx) return 0;

        if(dp[n]!=-1) return dp[n];
        
        return dp[n] = max(nums[n]+maxamount(nums,n+2,lastidx,dp),maxamount(nums,n+1,lastidx,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp1(n,-1),dp2(n,-1);
        if(n==1) return nums[0];
        int case_1 = maxamount(nums,0,n-2,dp1);
        int case_2 = maxamount(nums,1,n-1,dp2);

        return max(case_1,case_2);
    }
};