class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=nums.size()-1; i>=0; i--){
            for(int j=(i-1); j>=0; j--){
                if(nums[i]%2==0){
                    swap(nums[i],nums[j]);
                }
            }
        }
        return nums;
    }
};
