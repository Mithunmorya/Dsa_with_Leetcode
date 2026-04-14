class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
       int left=0;
       int right = n-1;
       int result = INT_MAX;
       while(left<=right){
        if(nums[left]==target){
            result  = min(result,abs(start-left));
            left++;
        }
        else if(nums[right]==target){
                result = min(result,abs(start-right));
                right--;
            }
        else{
            left++;
            right--;
        }
       }
        return result;
    }
};