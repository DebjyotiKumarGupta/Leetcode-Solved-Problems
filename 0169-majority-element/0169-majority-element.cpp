class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second>n/2) {
                return x.first;
            }
        }
        return -1;
    }
};