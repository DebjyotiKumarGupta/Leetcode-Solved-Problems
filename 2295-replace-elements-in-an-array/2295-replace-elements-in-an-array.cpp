class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<o.size();i++){
            int x = o[i][0];
            int y = o[i][1];
            nums[mp[x]] = y;
            mp[y] = mp[x];
        }
        return nums;
    }
};