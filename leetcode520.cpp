class Solution {
public:
    bool detectCapitalUse(string word) {
        bool b=true;
        int c=0;
        for(int i=1; i<word.length(); i++){
            if(word[i]>='A'&&word[i]<='Z'){
                b=false;
                c=c+1;
            }
        }
        if(((c+1)==word.length())&&(word[0]>='A'&&word[0]<='Z')){
            b=true;
        }
        return b;
    }
};
