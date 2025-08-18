class Solution {
public:
    int reverse(int x) {
        int n=x;
        int u=(pow(2,31)-1);
        int l=(pow(2,31)*(-1));
        int r=0;
        while(x!=0){
            int d=x%10;
            if((n>0)&&r>(u/10)){
                r=0;
                break;
            }
            else if((n<0)&&r<(l/10)){
                r=0;
                break;
            }
            r=(r*10)+d;
            x=x/10;
        }
        if(n<0&&r!=0){
            return r;
        }
        return r;
    }
};
