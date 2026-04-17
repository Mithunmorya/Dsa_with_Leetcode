class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
        for(int i=0; i<n;i++){
            if(words[i]==target){
                int mindist = abs(i-startIndex);
                int cirmindist = abs(n-mindist);
                ans = min(ans,min(mindist,cirmindist));
            }
        }
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};