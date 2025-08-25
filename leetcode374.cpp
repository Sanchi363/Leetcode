class Solution {
public:
    int guessNumber(int n) {
        int l=1;
        int h=n;
        int m=l+(h-l)/2;
        int ans;
        while(l<=h){
            if(guess(m)==0){
                ans=m;
                break;
            }
            else if(guess(m)==-1){
                h=m-1;
            }
            else{
                l=m+1;
            }
            m=l+(h-l)/2;
        }
        return ans;
    }
};
