class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto i:mp){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};