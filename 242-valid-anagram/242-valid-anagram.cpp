class Solution {
public:
    bool isAnagram(string s, string t) {
    const int CHAR = 256;
        int count[CHAR]={0};
        int n = s.length(), m = t.length();
        if(n!=m) return 0;
        for(int i=0;i<m;i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<n;i++){
            if(count[t[i]]!=0){
                return 0;
            }
        }
        return 1;
    }
};