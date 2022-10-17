class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second>n/3) {
                v.push_back(x.first);
            }
        }
        return v;
    }
};