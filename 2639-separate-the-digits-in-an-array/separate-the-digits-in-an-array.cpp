class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i=n-1;i>=0;i--){
            int num = nums[i];
            while(num>0){
            result.push_back(num%10);
            num /= 10;
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};