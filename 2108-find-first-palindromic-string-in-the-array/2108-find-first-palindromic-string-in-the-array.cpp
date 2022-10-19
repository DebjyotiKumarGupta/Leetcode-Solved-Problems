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
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(palin(words[i])) return words[i];
            else continue;
        }
        return "";
    }
};