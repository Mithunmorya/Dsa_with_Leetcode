class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxt = 0;
        int altitude = 0;
        for(int i = 0;i<n;i++){
            altitude += gain[i];
            maxt = max(maxt,altitude);
        }
        return maxt;
    }
};