class Solution {
public:

    int no_of_combi(vector<int>& coins,int amount,int n,vector<vector<int>>&dp){
        if(n==0 || amount <0) return 0;
        if(amount==0) return 1;

        if(dp[n][amount]!=-1) return dp[n][amount];

        return dp[n][amount] = no_of_combi(coins,amount,n-1,dp)+no_of_combi(coins,amount-coins[n-1],n,dp);
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return no_of_combi(coins,amount,n,dp);
    }
};