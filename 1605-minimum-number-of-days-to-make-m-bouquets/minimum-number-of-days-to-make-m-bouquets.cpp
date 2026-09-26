class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (n<(long long)m*k) return -1;
        int low = 0,high = *max_element(bloomDay.begin(),bloomDay.end()),mid;
        while(high>=low){
            mid = low + (high-low)/2;
            int bouquet= 0,flower=0;
            for(int num : bloomDay){
                if(num <= mid){
                    flower++;
                }
                else{
                    flower = 0;
                }
                if(flower==k){
                    bouquet++;
                    flower = 0;
                }

            }
            if(bouquet<m){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return low;
    }
};