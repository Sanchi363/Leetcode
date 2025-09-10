class Solution {
public:
    bool check(vector<int>& nums) {
        int n=0;
        bool f=true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                n=n+1;
            }
        }
        if(nums[0]<nums[nums.size()-1]){
            n=n+1;
        }
        if(n>1){
            f=false;
        }
        return f;
    }
};
