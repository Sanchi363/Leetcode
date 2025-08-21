class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m,l,h;
        set<int>s;
        vector<int>r;
        for(int i=0; i<nums1.size(); i++){
            int e=nums1[i];
            l=0;
            h=nums2.size();
            while(l<=h){
                m=(l+h)/2;
                if(m>nums2.size()-1){
                    break;
                }
                if(nums2[m]==e){
                    s.insert(e);
                    break;
                }
                else if(nums2[m]>e){
                    h=m-1;
                }
                else{
                    l=m+1;
                }
            }
        }
        for(int i:s){
            r.push_back(i);
        }
        return r;
    }
};
