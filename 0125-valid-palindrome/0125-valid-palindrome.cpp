class Solution {
public:
       bool palin(string s){
        int start = 0, end = s.length()-1;
        while(start<end){
            if(s[start]!=s[end]) return 0;
            start++;
            end--;
        }
        return 1;
    }
    bool isPalindrome(string s) {
       string z="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                z += char(s[i]+32);
            }
            if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
                z+= s[i];
            }
            
        }
        cout<<z;
        return palin(z);
    }
};