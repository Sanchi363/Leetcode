class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int l=0;
        int h=nums.size()-1;
        int m;
        while(l<=h){
            m=l+(h-l)/2;
            if((m!=nums.size()-1)&&(nums[m]==nums[m+1])){
                if((h-(m+1))%2==0){
                    h=m-1;
                }
                else{
                    l=m+2;
                }
            }
            else if(m!=0&&(nums[m]==nums[m-1])){
                if(((m-1)-l)%2==0){
                    l=m+1;
                }
                else{
                    h=m-2;
                }
            }
            else{
                break;
            }
        }
        return nums[m];
    }
};
