class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        for(int i=0; i<nums.size(); i++){
            s=s+nums[i];
        }
        int c=0;
        for(int i=1; i<=nums.size(); i++){
            c=c+i;
        }
        return c-s;
    }
};
