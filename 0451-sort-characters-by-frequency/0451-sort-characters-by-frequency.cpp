class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        vector<pair<int,char>> v;
        string z= "";
        for(auto x:s){
            m[x]++;
        }
        for(auto i:m){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            z.insert(z.size(),v[i].first,v[i].second);
        }
        return z;
    }
};