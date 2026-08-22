class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> check;
        for(int i =0;i<nums.size();i++){
            check[nums[i]] = 1;
        }
        for(int i = 0;i<=nums.size();i++){
            if(check[i] == 0) return i;
        }
        return -1;
    }
};