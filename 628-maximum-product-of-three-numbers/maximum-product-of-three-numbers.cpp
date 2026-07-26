class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long largest = INT_MIN;
        long long s_largest = INT_MIN;
        long long t_largest = INT_MIN;
        int n = nums.size();
        if(n==0) return 0;
        for(int i = 0;i<n;i++){
            if(nums[i]>=largest){
                t_largest = s_largest;
                s_largest = largest;
                largest = nums[i];
            }
            else if(nums[i]>=s_largest){
                t_largest = s_largest;
                s_largest = nums[i];
            } 
            else if(nums[i]>=t_largest) t_largest = nums[i];
        }
        long long ans1 = largest*s_largest*t_largest;



        long long largest1 = 0;
        long long s_largest1 = 0;
        if(n==0) return 0;
        for(int i = 0;i<n;i++){
            if(nums[i]<0){
            if(nums[i]<=largest1){
                s_largest1 = largest1;
                largest1 = nums[i];
            }
            else if(nums[i]<=s_largest1) s_largest1 = nums[i];}
        }
        long long ans2 = largest1*s_largest1*largest;
        return max(ans1,ans2);
    }
};