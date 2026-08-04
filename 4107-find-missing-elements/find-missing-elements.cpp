class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for(int i = 0;i<n;i++){
            if(nums[i]>largest)
            largest = nums[i];

            if(nums[i]<smallest)
            smallest = nums[i];
        }
        vector<int>ans;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i = smallest;i<=largest;i++){
            if(st.find(i) == st.end())
            ans.push_back(i);
        }
        return ans;
    }
};