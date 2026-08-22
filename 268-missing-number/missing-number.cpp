class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n = nums.size(),sum,temp=0;
        sum = n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            temp += nums[i];
        }
        return sum-temp;
    }
};