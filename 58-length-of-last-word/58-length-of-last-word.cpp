class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        //string t="" ;
       for(int i=s.length();i>=0;i--){
           if(s[i]==' ' && count!=0){
               break;
           }
           else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
               count++;
           }
       } 
        return count;
    }
};