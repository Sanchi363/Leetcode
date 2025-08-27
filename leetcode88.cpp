class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,j=0; i<(m+n),j<n; i++,j++){
            nums1[i]=nums2[j];
        }
        for(int i=0; i<(m+n); i++){
            int k=i;
            for(int j=(i+1); j<(m+n); j++){
                if(nums1[k]>nums1[j]){
                    k=j;
                }
            }
            if(k!=i){
                swap(nums1[k],nums1[i]);
            }
        }
    }
};
