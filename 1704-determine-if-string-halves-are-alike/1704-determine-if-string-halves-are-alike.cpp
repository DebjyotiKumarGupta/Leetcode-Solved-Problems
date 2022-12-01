class Solution {
public:
    bool vowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.length(),c1=0,c2=0;
        string s1 = s.substr(0,(n/2)),s2= s.substr(n/2,n);
        for(int i=0 ;i<n/2;i++){
            if(vowel(s1[i])) c1++;
            if(vowel(s2[i])) c2++;
        }
        if(c1==c2) return true;
        return false;
    }
};