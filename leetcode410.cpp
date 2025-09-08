class Solution {
    bool pos(vector<int>& nums, int k, int m){
        int s=1;
        int p=0;
        for(int i=0; i<nums.size(); i++){
            if(p+nums[i]<=m){
                p=p+nums[i];
            }
            else{
                s++;
                p=nums[i];
                if(s>k||nums[i]>m){
                    return false;
                }
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int l=0;
        int h=0,ans=-1;
        for(int i=0; i<nums.size(); i++){
            h=h+nums[i];
        }
        int m=l+(h-l)/2;
        while(l<=h){
            if(pos(nums,k,m)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
            m=l+(h-l)/2;
        }
        return ans;
    }
};
