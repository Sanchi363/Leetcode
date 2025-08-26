class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int h=letters.size()-1;
        int m;
        char ans=letters[0];
        while(l<=h){
            m=l+(h-l)/2;
            if(letters[m]>target){
                ans=letters[m];
                h=m-1;
            }
            else {
                l=m+1;
            }
        }
        return ans;
    }
};
