class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        long long largest = INT_MIN;
        long long s_largest = INT_MIN;
        for(int i = 0;i<n;i++){
            if(nums[i]>=largest){
                s_largest = largest;
                largest = nums[i];
            }
            else if(nums[i]>=s_largest){
                s_largest = nums[i];
            }
        }
    long long ans = (largest-1)*(s_largest-1);
    return ans;
    }
};