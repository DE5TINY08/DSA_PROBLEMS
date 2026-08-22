class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> check;
        for(int i =0;i<nums.size();i++){
            check[nums[i]] += 1;
        }
        for(auto const& [key, val] : check) {
            if(val == 1) {
                return key; 
            }
        }
        return -1;
    }
};