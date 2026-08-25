class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return 1;
        unordered_set<int> check(nums.begin(), nums.end());
        int maxi = 1;
        for(int num : check) {
            if(check.count(num - 1) == 0) {
                int current = num;
                int len = 1;
                while(check.count(current + 1)) {
                    current++;
                    len++;
                }
                maxi = max(maxi, len);
            }
        }
        
        return maxi;
    }
};