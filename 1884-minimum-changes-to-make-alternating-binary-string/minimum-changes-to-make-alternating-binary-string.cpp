class Solution {
public:
    int minOperations(string s) {
        int patternA = 0;   //010101
        int patternB = 0;  //101010
        for(int i = 0;i<s.size();i++){
            if(i%2==0){
                if(s[i] == '0') patternB++;
                if(s[i] == '1') patternA++;
            }
            else{
                if(s[i] == '0') patternA++;
                if(s[i] == '1') patternB++;
            }
        }
        return min(patternA,patternB);
    }
};