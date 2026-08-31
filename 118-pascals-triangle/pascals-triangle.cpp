class Solution {
public:
    int ncr(int n,int r){
        long long ans = 1,j=n;
        if (r > n - r) r = n - r;
        for(int i = 0;i < r;i++){
            ans = (ans*j)/(i+1);
            j--;
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> t(numRows) ;
        for(int i = 0;i< numRows;i++){
            t[i].resize(i + 1, 1);
            for(int j = 0;j<=i;j++){
                t[i][j] = ncr(i,j);
            }
        }
        return t;
    }
};