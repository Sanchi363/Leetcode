class Solution {
int  check(int a){
        int f=a;
        while(f!=0){
            int d=f%10;
            if(d==0){
                return false;
            }
            f=f/10;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>r;
        int l,h;
        l=1;
        h=n-1;
        bool flag=true;
        while(flag){
            if(check(l)&&check(h)){
                flag=false;
                break;
            }else{
                l++;
                h--;
            }
        }
        r.push_back(l);
        r.push_back(h);
        return r;
    }
};
