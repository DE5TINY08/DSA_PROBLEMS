class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row,column;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j] == 0){
                   row.push_back(i);
                   column.push_back(j);
                }
            }
        }
        for(int i =0 ; i<row.size();i++){
            for(int k = 0;k<n;k++){
                matrix[row[i]][k] = 0;
            }
            for(int k = 0;k<m;k++){
                matrix[k][column[i]] = 0;
            }
        }
    }
};