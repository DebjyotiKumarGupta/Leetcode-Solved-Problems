class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mp;
        vector<int> v;
        for(auto i:nums) for(auto k:i)  mp[k]++;
        for(auto i:mp) if(i.second==nums.size()) v.push_back(i.first);
        return v;
    }
};