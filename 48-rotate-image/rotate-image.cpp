class Solution {
public:
    void frotate(vector<vector<int>>& matrix,int &n,int start){
        if (start >= n) return ;
        int temp = matrix[start][start];
        matrix[start][start] = matrix[n][start];
        matrix[n][start] = matrix[n][n];
        matrix[n][n] = matrix[start][n];
        matrix[start][n] = temp;
        for(int i = start + 1;i<n;i++){
        temp = matrix[start][i];
        matrix[start][i] = matrix[n-i+start][start];
        matrix[n-i+start][start] = matrix[n][n-i+start];
        matrix[n][n-i+start] = matrix[i][n];
        matrix[i][n] = temp;
        }
        n--;
        start++;
        frotate(matrix,n,start);
        
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n>1){
            n--;
            frotate(matrix,n,0);
        }
    }
};