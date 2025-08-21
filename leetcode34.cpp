class Solution {
    private:
    int first(vector<int>& nums, int target){
        int l=0;
        int h=(nums.size()-1);
        int m;
        int ans=-1;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                h=m-1;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int target){
        int l=0;
        int h=(nums.size()-1);
        int m;
        int ans=-1;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target){
                ans=m;
                l=m+1;
            }
            else if(nums[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=first(nums, target);
        int l=last(nums, target);
        vector<int> r;
        r.push_back(f);
        r.push_back(l);
        return r;
    }
};
