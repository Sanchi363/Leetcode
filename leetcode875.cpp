class Solution {
public:
    int max(vector<int>& piles){
        int max=piles[0];
        for(int i=1; i<piles.size(); i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        return max;
    }
    long long int hours(vector<int>&piles,int m){
        long long int t=0;
        for(int i=0; i<piles.size(); i++){
            double d=((double)piles[i]/(double)m);
            t=t+ceil(d);
        }
        return t;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int f=1,l,m;
        l=max(piles);
        int ans=-1;
        long long int th;
        while(f<=l){
           m=f+(l-f)/2;
            th=hours(piles,m);
            if(th<=h){
                ans=m;
                l=m-1;
            }
            else if(th>h){
                f=m+1;
            }
        }
        return ans;
    }
};
