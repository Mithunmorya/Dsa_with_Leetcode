class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // long long sumodd = 0;
        // long long sumeven = 0;
        // int j= 1;
        // int k = 2;
        // for(int i = 0;i<n;i++){
        //     sumodd += j;
        //      j += 2;
        // }
        // for(int i = 0;i<n;i++){
        //     sumeven += k;
        //     k += 2;
            
        // }
        // // int smallest = sumodd;
        // // if(sumodd>sumeven)
        // // smallest = sumeven;

        // // for(int i = smallest;i>=0;i--){
        // //     if(sumodd%i==0 && sumeven%i==0)
        // //     return i;
        // // }
        // // return -1;
        // return __gcd(sumodd,sumeven);
        long long sumodd = n*n;
        long long sumeven = (n*n)+n;
        return gcd(sumodd,sumeven);
    }
};