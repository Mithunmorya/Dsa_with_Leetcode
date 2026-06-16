class Solution {
public:

    string rever(string r){
        if(r.size()==0) return "";
        string ans;
        for(int i = r.size()-1;i>=0;i--){
            ans.push_back(r[i]);
        }
        return ans;
    }
    string remove(string r){
        if(r.size()==0) return "";
        string ans;
        for(int i=0;i<r.size()-1;i++){
            ans.push_back(r[i]);
        }
        return ans;
    }
    string processStr(string s) {
        if(s.size()==0) return "";
        string ans;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='*'){
                ans = remove(ans);
            }
            else if(s[i]=='#')
            ans = ans+ans;

            else if(s[i]=='%')
            ans = rever(ans);

            else
            ans.push_back(s[i]);
        }
        return ans;
    }
};