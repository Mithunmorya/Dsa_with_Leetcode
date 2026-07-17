class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int right = matrix[0].size()-1;
        int left = 0;
        int bottom = matrix.size()-1;
        int n = matrix.size();
        vector<int> ele;
        while(left<=right && top<=bottom){
        for(int i =left;i<=right;i++){
            ele.push_back(matrix[top][i]);
        }
         top++;
        for(int i =top;i<=bottom;i++){
            ele.push_back(matrix[i][right]);
        }
         right--;
        if(top<=bottom){
        for(int i =right;i>=left;i--){
            ele.push_back(matrix[bottom][i]);
        }
        bottom--;}
        if(left<=right){
        for(int i =bottom;i>=top;i--){
            ele.push_back(matrix[i][left]);
            
        }left++;}}
        return ele;
    }
};