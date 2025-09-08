class Solution {
    bool pos(vector<int>& position, int m,int mid){
        int c=1;
        int lp=position[0];
        for(int i=0; i<position.size(); i++){
            if(position[i]-lp>=mid){
                c++;
                lp=position[i];
            }
            if(c==m){
                return true;
            }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1;
        int h=position[position.size()-1];
        int mid,ans=-1;
        while(l<=h){
            mid=l+(h-l)/2;
            if(pos(position,m,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};
