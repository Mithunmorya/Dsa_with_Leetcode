class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int>lastidx(26);
        vector<int>visited(26,0);
        for(int i = 0;i<n;i++)
            lastidx[s[i]-'a'] = i;

        string ans = "";

        for(int i =0;i<n;i++){
            if(visited[s[i]-'a']) continue;

            while(!ans.empty() && ans.back()>s[i] && lastidx[ans.back()-'a']>i){
                visited[ans.back()-'a'] =0 ;
                ans.pop_back();
            }
            ans += s[i];
            visited[s[i]-'a'] =1;
        }
        return ans;
    }
};