class Solution {
public:

// int solve(vector<int>nums,int n,vector<int>&dp){
//     if(n==0)  return nums[0];
//     if(n==1) return max(nums[0],nums[1]);

//     if(dp[n]!=-1)
//     return dp[n];
//     return dp[n] = max(nums[n]+solve(nums,n-2,dp),solve(nums,n-1,dp));
// }
    int rob(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp(3,-1);

       if(n==1)  return nums[0];
       if(n==2) return max(nums[0],nums[1]);

       dp[0] = nums[0];
       dp[1] = max(nums[1],nums[0]);
       for(int i=2;i<n;i++){
        dp[2] = max(nums[i]+dp[0],dp[1]);
        dp[0] = dp[1];
        dp[1] = dp[2];
       }
      
      return dp[2];
    }
};