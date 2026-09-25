class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0,high;
        high = nums.size() - 1;
        int mid;
        while(high>=low)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] >= nums[low])
            {
                if(nums[low] <= target && nums[mid] > target)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(nums[high] >= target && nums[mid] < target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
     return -1;   
    }
};