class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                ans[2*pos] = nums[i];
                pos += 1;
            }
            else{
                ans[2*(i-pos)+1] = nums[i];
            }
        }
        return ans;
    }
};