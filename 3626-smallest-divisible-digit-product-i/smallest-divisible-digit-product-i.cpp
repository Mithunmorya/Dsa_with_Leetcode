class Solution {
public:
int pro_of_digit(int n){
    int product  =1;
    while(n>0){
        int r = n%10;
        product *= r;
        n = n/10;
    }
    return product;
}
    int smallestNumber(int n, int t) {
        while(true){
            if(pro_of_digit(n)%t==0)
            return n;
            n++;
        }
    }
};