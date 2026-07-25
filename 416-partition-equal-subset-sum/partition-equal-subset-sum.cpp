class Solution {
public:

bool partition(vector<int>& arr,int index,int sum,vector<vector<int>> &dp){
        if(sum==0) return 1;
        if(index==0) return arr[0]==sum;
      if(sum < 0 ) return 0;
      
      if(dp[index][sum]!=-1) return dp[index][sum];
      
      return dp[index][sum]= partition(arr,index-1,sum,dp) || partition(arr,index-1,sum-arr[index],dp);
  }
    bool canPartition(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;
        for(int r: arr){
            totalSum += r;
        }
        if(totalSum%2 != 0) return false;
        totalSum /= 2;
        vector<vector<int>> dp(n,vector<int>(totalSum+1,-1));
        
        return partition(arr,n-1,totalSum,dp);
    }
};