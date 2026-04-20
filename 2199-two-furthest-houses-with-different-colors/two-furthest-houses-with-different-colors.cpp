class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;

        // Scenario 1: Compare everything with the first house (index 0)
        // We look for the furthest 'i' from 0 where colors are different.
        for (int i = n - 1; i > 0; i--) {
            if (colors[i] != colors[0]) {
                ans = max(ans, i); // Distance is i - 0
                break; // Found the furthest one for this side
            }
        }

        // Scenario 2: Compare everything with the last house (index n-1)
        // We look for the furthest 'i' from n-1 where colors are different.
        for (int i = 0; i < n - 1; i++) {
            if (colors[i] != colors[n - 1]) {
                ans = max(ans, (n - 1) - i); // Distance is (n-1) - i
                break; // Found the furthest one for this side
            }
        }

        return ans;
    }
};