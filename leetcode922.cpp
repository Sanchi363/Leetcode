class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int m=nums[i];
            for(int j=(i+1); j<nums.size(); j++){
                if((i%2==0)&&(m%2!=0)){
                    if(nums[j]%2==0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
                else if((i%2!=0)&&(m%2==0)){
                    if(nums[j]%2!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }
        return nums;
    }
};
