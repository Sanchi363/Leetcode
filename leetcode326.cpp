class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool b=true;
        while(n!=1){
            if(n%3!=0){
                b=false;
                break;
            }
            n=n/3;
        }
        return b;
    }
};
