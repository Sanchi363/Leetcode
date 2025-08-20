class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        bool b=true;
        while(n!=1){
            if(n%4!=0){
                b=false;
                break;
            }
            n=n/4;
        }
        return b;
        
    }
};
