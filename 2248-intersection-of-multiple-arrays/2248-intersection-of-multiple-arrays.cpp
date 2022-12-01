class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        set<int> s;
        vector<int> v;
        map<int,int> mp;
        for(auto i:nums){
            for(auto j:i) mp[j]++;
        }
        for(auto t:mp){
            if(t.second==nums.size()) s.insert(t.first);
        }
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};