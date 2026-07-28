class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();

        vector<int>freq(26,0);
        for(int i= 0;i<n;i++){
            freq[s[i]-'a']++;
        }
        char mid = '\0';
        string ans = "";
        for(int i = 0;i<26;i++){
            if(freq[i]==0) continue;

            if(freq[i]%2!=0) mid = 'a'+i;

            for(int j = 0;j<freq[i]/2;j++){
                ans += 'a'+i;
            } 
        }
        string rev = ans;
        reverse(rev.begin(),rev.end());

        if(mid=='\0') return ans+rev;
        return ans+mid+rev;
    }
};