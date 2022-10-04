class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
       int n = words.size() , m = pref.length(), count=0;
        for(int i=0;i<n;i++){
            string s = words[i].substr(0,m);
            if(s==pref){
                count++;
            }
        }
        return count;
    }
};