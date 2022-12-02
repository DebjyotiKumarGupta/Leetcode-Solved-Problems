class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())  return false;
        unordered_set<int> s1,s2;
        vector<int> v1(26,0),v2(26,0);
        for(int i=0;i<word1.size();i++){
            s1.insert(word1[i]);
            v1[word1[i]-'a']++;
            s2.insert(word2[i]);
            v2[word2[i]-'a']++;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
       if(s1!=s2 || v1!=v2) return false;
        return true;
    }
};