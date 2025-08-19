class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=s.size();
        if(a%2==0){
            for(int i=0, j=(a-1); i<(a/2),j>=(a/2);i++,j--){
                swap(s[i],s[j]);
            }
        }
        else{
            for(int i=0, j=(a-1); i<(a/2),j>(a/2);i++,j--){
                swap(s[i],s[j]);
            }
        }
    }
};
