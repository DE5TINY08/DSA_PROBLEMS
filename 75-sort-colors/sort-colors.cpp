class Solution {
public:
    void sortColors(vector<int>& nums) {
        int sum = 0,count = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            if(nums[i] == 2){
                count += 1;
            }
        }
        sum -= count*2;
        int i = 0;
        while(i<(nums.size()-(sum+count))){
            nums[i] = 0;
            i++;
        }
        while(i<(nums.size()- count)){
            nums[i] = 1;
            i++;
        }
        while(i<nums.size()){
            nums[i] = 2;
            i++;
        }
    }
};