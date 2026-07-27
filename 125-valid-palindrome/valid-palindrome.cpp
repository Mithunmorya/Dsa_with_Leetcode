class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        string s1 = "";
        for(char c: s){
            if(c>='A' && c<='Z')
                c = c-'A'+'a';
            
            if((c>='a' && c<='z') || (c >= '0' && c <= '9'))
                s1 += c;
        }      
        
        int n1 = s1.size();
        int left = 0;
        int right = n1-1; 
        while(left<=right){
            if(s1[left]!= s1[right])
            return false;
            else
            left++;
            right--;
        }
        return true;
    }
};