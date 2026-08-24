class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> presum;
        presum[0] = 1;
        long long sum =0,count=0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            if(presum.find(sum - k) != presum.end()){
                count += presum[sum-k] ;
            }
            presum[sum] += 1;
        }
        return count;
    }
};