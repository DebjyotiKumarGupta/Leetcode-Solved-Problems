class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int start =0,end = s.size();
        int i=0;
        while(v.size()<=s.size()){
            if(s[i]=='I'){
                v.push_back(start);
                i++;
                start++;
            }
            else{
                v.push_back(end);
                end--;
                i++;
            }
        }
        return v;
    }
};