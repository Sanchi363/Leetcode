class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        int m;
        int ans=-1;
        while(l<h){
            m=(l+h)/2;
            if(arr[m]>arr[m+1]&&arr[m]>arr[m-1]){
                ans=m;
                break;
            }
            else if(arr[m]<arr[m+1]){
                l=m+1;
            }
            else{
                h=m;
            }
        }
        return ans;
    }
};
