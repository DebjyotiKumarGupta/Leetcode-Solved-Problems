class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0 ;
        for(int i=0;i<words.size();i++){
            int n = words[i].length();
            string s1= s.substr(0,n);
            if(s1==words[i]) count++;
        }
        return count;
    }
};