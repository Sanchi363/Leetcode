class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool b=true;
        while(n!=1){
            if((n%2)!=0){
                b=false;
                break;
            }
            n=(n/2);
        }
        return b;
    }
};
