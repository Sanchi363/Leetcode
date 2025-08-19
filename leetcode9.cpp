class Solution {
public:
    bool isPalindrome(int x) {
        long long int d=0;
        int p=x;
        if(x>0)
        {while(x!=0){
            int l=(x%10);
            d=(d*10)+l;
            x=x/10;
        }
        if(p==d){
            return true;
        }
        else{
            return false;
        }}
        else if(x==0){
            return true;
        }
        else{
            return false;
        }
    }
};
