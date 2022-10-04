class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> v;
        vector<string> s;
        for(int i=0;i<names.size();i++){
             v.push_back( make_pair(heights[i],names[i]) );
        }
        sort(v.begin(),v.end(),greater<pair<int,string>>());
        // reverse(v.begin(),v.end());
        for(int i=0;i<names.size();i++){
            s.push_back(v[i].second);
        }
        return s;
    }
};