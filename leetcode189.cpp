class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>r;
        for(int i=0; i<nums.size(); i++){
            r.push_back(nums[i]);
        }
       for(int i=0; i<nums.size(); i++){
            nums[(i+k)%nums.size()]=r[i];
       }
    }
};
