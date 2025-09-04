class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        if(nums.size()==1){
            if(nums[0]==target){
                return true;
            }else{
                return false;
            }
        }
        int m;
        while(l<=h){
            m=l+(h-l)/2;
            if(nums[m]==target){
                return true;
            }
            if(nums[m]==nums[l]&&nums[m]==nums[h]){
                l++;
                h--;
                continue;
            }
            else if(nums[m]>=nums[l]){
                if(nums[m]>=target&&nums[l]<=target){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(nums[m]<=target&&nums[h]>=target){
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return false;
    }
};
