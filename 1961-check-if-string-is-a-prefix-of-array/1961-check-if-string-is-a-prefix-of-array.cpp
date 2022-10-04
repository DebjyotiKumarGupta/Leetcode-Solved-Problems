class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string m = "";
        for(int i=0;i<words.size();i++){
            m+=words[i];
            if(m==s){
                return true;
            }
        }
        return false;
    }
};