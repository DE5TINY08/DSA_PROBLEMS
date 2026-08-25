class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return 1;
        unordered_set<int> check(nums.begin(), nums.end());
        int max_len = 1;
        for(int num : check) {
            if(check.count(num - 1) == 0) {
                int current_num = num;
                int current_len = 1;
                while(check.count(current_num + 1)) {
                    current_num++;
                    current_len++;
                }
                max_len = max(max_len, current_len);
            }
        }
        
        return max_len;
    }
};