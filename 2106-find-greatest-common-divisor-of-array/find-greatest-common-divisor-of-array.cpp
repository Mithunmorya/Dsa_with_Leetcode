class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = INT_MAX;
        int large  = INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<small)
            small = nums[i];
            if(nums[i]>large)
            large = nums[i];
        }
        return gcd(small,large);
    }
};