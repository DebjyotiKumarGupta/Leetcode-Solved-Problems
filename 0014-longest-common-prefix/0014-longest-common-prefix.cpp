class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];
        string c1 ="";
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<strs[i].length();j++){
                if(strs[i][j]==str[j]) c1+= str[j];
                else break;
            }
            str = c1;
            c1="";
        }
        return  str;
    }
};