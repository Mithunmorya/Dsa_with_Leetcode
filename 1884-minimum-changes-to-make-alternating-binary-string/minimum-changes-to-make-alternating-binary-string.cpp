class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int patternA = 0; //010101
        for(int i = 0;i<s.size();i++){
            if(i%2==0 ){
                if(s[i]!='0')
                patternA++;
            }
            else{
                if(s[i] != '1')
                patternA++;
            }
        }
        int patternB = n-patternA;
        return min(patternB,patternA);
    }
};