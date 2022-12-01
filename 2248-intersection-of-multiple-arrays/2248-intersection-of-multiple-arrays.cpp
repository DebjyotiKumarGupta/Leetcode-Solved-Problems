class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(auto i:nums){
            for(auto j:i) mp[j]++;
        }
        for(auto t:mp){
            if(t.second==nums.size()) v.push_back(t.first);
        }
        return v;
    }
};