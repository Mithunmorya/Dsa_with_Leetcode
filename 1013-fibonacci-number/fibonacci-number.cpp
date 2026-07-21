class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int c = 1;
        if(n==0) return 0;
        if(n == 1 )return 1;
        if(n == 2) return 1;
        
        for(int i=3;i<=n;i++){
            a = b;
            b = c;
            c = a+b;
        }
        return c;
    }
};