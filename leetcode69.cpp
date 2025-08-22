class Solution {
public:
    int mySqrt(int x) {
        int ans;
        long long int s;
        if(x==1||x==0){
            return x;
        }
        else {
            int l=1;
            int h=x-1;
            long long int m;
            while(l<=h){
                m=l+(h-l)/2;
                s=m*m;
                if(s==x){
                    ans=m;
                    break;
                }
                else if(s<x){
                    ans=m;
                    l=m+1;
                }
                else{
                    h=m-1;
                }
            }
        }
        return ans;
    }
};
