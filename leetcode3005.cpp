class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max;
        int p;
        stack<int>s;
        s.push(0);
        for(int i=0; i<nums.size(); i++){
            max=1;
            int e =nums[i];
            for(int j=(i+1); j<nums.size(); j++){
                if(e==nums[j]){
                    max++;
                }
            }
            if(s.top()==max){
                p=p+max;
            }
            if(s.top()<max){
                s.push(max);
                p=max;
            }
        }
        return p;
    }
};
