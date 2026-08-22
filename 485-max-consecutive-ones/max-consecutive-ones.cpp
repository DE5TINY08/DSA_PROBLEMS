class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,i=0;
        for(int j = 0;j<=nums.size();j++){
            if(j==nums.size()||nums[j] == 0){
                ans = max(ans,j-i);
                i = j + 1;
            }
        }
        return ans;
    }
};