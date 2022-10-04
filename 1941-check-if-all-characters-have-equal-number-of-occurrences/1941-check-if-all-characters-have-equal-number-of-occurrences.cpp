class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int> mp;
        unordered_set<int> s1;
        for(auto x:s){
            mp[x]++;
        }
        for(auto i:mp){
            s1.insert(i.second);
        }
        if(s1.size()==1) return 1;
        return 0;
    }
};