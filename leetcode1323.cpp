class Solution {
public:
    int maximum69Number (int num) {
        int n=0;
        while(num!=0){
            int l=(num%10);
            n=(n*10)+(l);
            num=num/10;
        }
        int r=0;
        int c=1;
        while(n!=0){
            int d=n%10;
            if(d==6&&c==1){
                d=9;
                c=0;
            }
            r=(r*10)+d;
            n=n/10;
        }
        return r;
    }
};
