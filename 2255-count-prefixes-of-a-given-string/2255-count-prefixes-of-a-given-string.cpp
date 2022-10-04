class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0;
        string m = "";
        for(int i=0;i<s.length();i++){
              m+=s[i];
            for(int j=0;j<words.size();j++){
                cout<<m;
                if(m==words[j]) count++;
            }
        }
        return count;
    }
};