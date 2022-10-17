class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count=0,pair=0;
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            pair+= i.second/2;
            count+= i.second%2;
        }
       
        return {pair,count};
    }
};