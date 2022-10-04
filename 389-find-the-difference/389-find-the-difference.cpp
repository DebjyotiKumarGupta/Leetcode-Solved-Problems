class Solution {
public:
    char findTheDifference(string s, string t) {
       const int CHAR = 256;
        int count[CHAR]={0};
        for(int i=0;i<t.length();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<t.length();i++){
            if(count[t[i]]==-1){
                return t[i];
            }
        }
        return -1;
    }
};