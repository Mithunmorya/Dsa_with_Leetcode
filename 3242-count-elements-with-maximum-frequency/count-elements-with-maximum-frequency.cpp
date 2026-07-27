class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int x: nums)
            m[x]++;
        
        int maxcount  = 0;
        for(auto it: m){
            maxcount = max(maxcount,it.second);
        }
        int ans = 0;
    for(auto it: m){
        if(it.second== maxcount) ans += maxcount;
    }
    return ans;
    }
};