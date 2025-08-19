class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int m;
        int ans=-1;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                break;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
        }
        return ans;
    }
};
