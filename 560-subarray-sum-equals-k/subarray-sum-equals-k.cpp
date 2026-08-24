class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> presum;
        
        
        presum[0] = 1;
        
        int sum = 0; 
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            int rem = sum - k;
            if (presum.find(rem) != presum.end()) {
                count += presum[rem]; 
            }
            presum[sum]++;
        }

        return count;
    }
};