class Solution {
public:
    string reverseWords(string s) {
        string r;
        string p;
        for(int i=s.length(); i>=0; i--){
            if(s[i]>='a'&&s[i]<='z'){
                r.push_back(s[i]);
            }
            if(s[i]>='A'&&s[i]<='Z'){
                r.push_back(s[i]);
            }
            if(s[i]>='0'&&s[i]<='9'){
                r.push_back(s[i]);
            }
            if((s[i]==' ')&&(r.length()>0)){
                reverse(r.begin(),r.end());
                p=p+r;
                p.push_back(' ');
                r.erase(r.begin(),r.end());
            }
        }
        reverse(r.begin(),r.end());
        p=p+r;
        r.erase(r.begin(),r.end());
        if(p[0]==' '){
            s.erase(0,1);
        }
        if(p[p.length()-1]==' '){
            p.erase(p.length()-1,p.length());
        }
        return p;
    }
};
