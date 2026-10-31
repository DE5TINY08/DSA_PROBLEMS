class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m>n) return findMedianSortedArrays(nums2,nums1);
        int low = 0,high = m,target = ((m+n+1)/2);
        while(high>=low){
            int mid = low + (high-low)/2;
            int in = target - mid;
            int l1 = (mid == 0) ? INT_MIN : nums1[mid - 1];
            int r1 = (mid == m) ? INT_MAX : nums1[mid];
            int l2 = (in == 0) ? INT_MIN : nums2[in - 1];
            int r2 = (in == n) ? INT_MAX : nums2[in];
            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2 == 1) {
                    return max(l1, l2);
                } else {
                    return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
                }
            } 
            else if (l1 > r2) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return 0.0;
    }
};