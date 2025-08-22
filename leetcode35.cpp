class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int m;
        int ans;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                break;
            }
            else if(nums[m]>target){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
                ans=l;
            }
        }
        return ans;
    }
};
