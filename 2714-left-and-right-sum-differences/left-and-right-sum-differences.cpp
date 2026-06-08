class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int left  = 0;
        int right = 0;
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            right += nums[i];
        }

        for(int i = 0;i<n;i++){
            right  = right -nums[i];
            ans[i] = abs(right -left);
            left = left+nums[i];
        }
        return ans;
    }
};