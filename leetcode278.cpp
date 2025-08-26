class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int h=n;
        int m;
        int ans=-1;
        while(l<=h){
            m=l+(h-l)/2;
            if(isBadVersion(m)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};
