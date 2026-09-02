class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c1=0,c2=0,maj1,maj2;
        for(int i : nums){
            if(i == maj1){
                c1++;
            }
            else if(i == maj2){
                c2++;
            }
            else if(c1 == 0){
                c1 = 1;
                maj1 = i;
            }
            else if(i == maj1){
                c1++;
            }
            else if(c2 == 0 ){
                c2 = 1;
                maj2 = i;
            }
            else if(i == maj2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for(int i : nums) {
            if(i == maj1) c1++;
            else if(i == maj2) c2++;
        }
        int n = nums.size()/3;
        if(c1 > n){
            ans.push_back(maj1);
        }
        if(c2 > n){
            ans.push_back(maj2);
        }
    return ans;
    }
};