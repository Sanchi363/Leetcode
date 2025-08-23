class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int m=l+(h-l)/2;
        while(l<h){
            if(nums[m]>=nums[0]){
                l=m+1;
            }
            else{
                h=m;
            }
            m=l+(h-l)/2;
        }
        if(nums[0]<nums[m]){
            return nums[0];
        }
        return nums[m];
    }
};
