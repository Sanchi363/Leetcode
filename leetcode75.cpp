class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int k=i;
            for(int j=(i+1); j<nums.size(); j++){
                if(nums[j]<nums[k]){
                    k=j;
                }
            }
            if(k!=i){
                int temp=nums[i];
                nums[i]=nums[k];
                nums[k]=temp;
            }
        }
    }
};
