class Solution {
public:

    vector<vector<vector<vector<int>>>> dp;

    int fun(int pos,int tight,int leadingZeros,int tillnow,vector<int>digits){
        if(pos == digits.size()){
            if(!leadingZeros){
                if(tillnow == 4){
                    return 0;
                }else{
                    return 1;
                }
            }
            return 0;
        }
        int res = dp[pos][tight][leadingZeros][tillnow];
        if(~res){
            return res;
        }
        int ans = 0;
        int limit = tight? digits[pos] : 9;
        for(int i=0;i<=limit;i++){
            if(i == 3 || i == 7 || i == 4){
                continue;
            }
            int new_tight = tight && (i == digits[pos]);
            if(leadingZeros && i == 0){
                ans += fun(pos+1,new_tight,1,tillnow+1,digits);
            }else if(leadingZeros && i!=0){
                if(i == 1 || i == 8){
                    ans += fun(pos+1,new_tight,0,tillnow + 1,digits);
                }else{
                    ans += fun(pos+1,new_tight,0,tillnow,digits);
                }
            }else if(!leadingZeros){
                if(i == 1 || i == 8 || i == 0){
                    ans += fun(pos+1,new_tight,0,tillnow + 1,digits);
                }else{
                    ans += fun(pos+1,new_tight,0,tillnow,digits);
                }
            }
        }
        return dp[pos][tight][leadingZeros][tillnow] = ans;
    }

    int rotatedDigits(int n) {
        dp.assign(5,vector<vector<vector<int>>>(2,vector<vector<int>>(2,vector<int>(5,-1))));
        vector<int>digits(4);
        int i = 3;
        while(n){
            digits[i] = n%10;
            n /= 10;
            i--;
        }
        return fun(0,1,1,0,digits);
    }
};