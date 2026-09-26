class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0),mid;
        while(high>=low){
            mid = low + (high-low)/2;
            int rem = mid,split=1;
            for(int num : nums){
                if(rem >= num){
                    rem -= num;
                }
                else{
                    split++;
                    rem = mid- num;
                }
            }
            if(split > k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};