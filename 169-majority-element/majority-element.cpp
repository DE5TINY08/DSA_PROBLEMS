class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = 0,maj =0;
        for(int i = 0;i<nums.size();i++){
            if(n == 0){
                n = 1;
                maj = nums[i];
            }
            else if(nums[i]== maj){
                n += 1;
            }
            else {
                n-= 1;
            }
        }
        return maj;
    }
};