class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>rowv(m);
        vector<int>colm(n);
        int special1 = 0;

        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(mat[row][col]== 1){
                    rowv[row]++;
                    colm[col]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j] && rowv[i]==1 && colm[j]==1){
                    special1++;
                }
            }
        }
        return special1;
    }
};