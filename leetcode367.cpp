class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1){
            return true;
        }
        int l=1;
        int h=num-1;
        long long int m,s;
        bool b=false;
        while(l<=h){
            m=l+(h-l)/2;
            s=m*m;
            if(s==num){
                b=true;
                break;
            }
            else if(s<num){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return b;
    }
};
