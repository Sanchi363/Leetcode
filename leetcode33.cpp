class Solution {
int pi(vector<int>& nums,int l,int h){
            int  m=(l+h)/2;
            int ans;
            while(l<h){
                if(nums[m]>=nums[0]){
                    l=m+1;
                }
                else{
                    h=m;
                }
                m=(l+h)/2;
            }
            return m;
        }
int bin(vector<int>& nums,int l  ,int h, int target){
    int m;
    m=(l+h)/2;
    int ans=-1;
    while(l<=h)
    {   m=(l+h)/2;
        if(nums[m]==target){
        ans=m;
        break;
    }
    else if(nums[m]>target){
        h=m-1;
    }
    else{
        l=m+1;
    }}
    return ans;
}
public:
    int search(vector<int>& nums, int target) {
        int p=pi(nums,0,nums.size()-1);
        int ans;
        if(target>=nums[p]&&target<=nums[nums.size()-1])
        {
            ans= bin(nums,p,nums.size()-1,target);
        }
        else{
           ans= bin(nums,0,p-1,target);
        }
        return ans;
    }
};
