class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(int i=0; s[i]!='\0'; i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                r.push_back(s[i]);
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                r.push_back(tolower(s[i]));
            }
        }
        string p=r;
        reverse(p.begin(),p.end());
        if(r==p){
            return true;
        }
        else{
            return false;
        }
    }
};
