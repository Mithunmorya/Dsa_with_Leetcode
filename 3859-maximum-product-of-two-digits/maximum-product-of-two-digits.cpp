class Solution {
public:
    int maxProduct(int n) {
        long long largest = INT_MIN;
        long long s_largest = INT_MIN;
        int cal = 0;
        if(n==0) return 0;
        while(n>0){
            cal = n%10;
            if(cal>=largest){
                s_largest = largest;
                largest = cal;
            }
            else if(cal>=s_largest) s_largest = cal;
            n = n/10;
        }
        long long ans = largest*s_largest;
        return ans;
    }
};