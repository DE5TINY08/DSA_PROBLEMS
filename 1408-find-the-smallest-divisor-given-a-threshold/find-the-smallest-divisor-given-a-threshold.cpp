class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high =0,low = 1,mid;
        for(int i = 0;i<nums.size();i++){
                high = max(high , nums[i]);
            }
        while(high>=low){
            mid = low + (high-low)/2;
            int sum =0;
            for(int i = 0;i<nums.size();i++){
                sum += (nums[i] + mid - 1) / mid;
            }
            if (sum > threshold){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
};