class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1,p2;
        if(x<z){
            p1=z-x;
        }
        else{
            p1=x-z;
        }
        if(y<z){
            p2=z-y;
        }
        else{
            p2=y-z;
        }
        if(p1>p2){
            return 2;
        }
        else if(p1==p2){
            return 0;
        }
        return 1;
    }
};
