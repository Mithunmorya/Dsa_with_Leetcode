class Solution {
public:

    int findmincoin(vector<int>& coins,int amount,int n,vector<vector<int>>&dp){
        if(n==0 || amount<0) return 1e9;
        if(amount==0) return 0;

        if(dp[n][amount] != -1) return dp[n][amount];

        return dp[n][amount] = min(findmincoin(coins,amount,n-1,dp),1+findmincoin(coins,amount-coins[n-1],n,dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans =  findmincoin(coins,amount,n,dp);
        return ans>=1e9?-1:ans;
    }
};