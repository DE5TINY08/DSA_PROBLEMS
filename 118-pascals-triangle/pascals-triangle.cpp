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
        vector<vector<int>> t ;
        for(int i = 0;i< numRows;i++){
            vector<int> ans;
            for(int j = 0;j<=i;j++){
                ans.push_back(ncr(i,j));
            }
            t.push_back(ans);
        }
        return t;
    }
};