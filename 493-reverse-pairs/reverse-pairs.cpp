void merge(vector<int>& nums,int left,int mid,int high){
    int right = mid +1,l=left;
    vector<int> temp;
    while(l<=mid && right<=high){
        if(nums[l]<nums[right]){
            temp.push_back(nums[l]);
            l++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(l<=mid){
        temp.push_back(nums[l]);
        l++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=left;i<=high;i++){
        nums[i] = temp[i-left];
    }
}
int cpair(vector<int>& nums, int left, int mid, int right) {
    int count = 0;
    int j = mid + 1;
    
    for (int i = left; i <= mid; i++) {
        while (j <= right && nums[i] > 2LL * nums[j]) {
            j++;
        }
        count += (j - (mid + 1));
    }
    
    return count;
}
int ms(vector<int>& nums,int left,int right){
    if (left >= right) return 0;
    int mid = left + (right-left)/2,ans = 0;
    ans += ms(nums,left,mid);
    ans += ms(nums,mid+1,right);
    ans += cpair(nums,left,mid,right);
    merge(nums,left,mid,right);
    return ans; 

}
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return ms(nums,0,nums.size()-1);
    }
};