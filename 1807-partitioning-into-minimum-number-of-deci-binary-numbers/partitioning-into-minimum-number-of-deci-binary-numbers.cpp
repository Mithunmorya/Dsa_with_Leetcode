class Solution {
public:
    int minPartitions(string n) {
        int largest = INT_MIN;
        for(int i = 0;i<n.size();i++){
            int curr= n[i]-'0';
            if(curr>largest){
                largest = curr;
            }
        }
        return largest;
    }
};