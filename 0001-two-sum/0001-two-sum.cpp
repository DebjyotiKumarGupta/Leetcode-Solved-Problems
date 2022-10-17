class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(s.find(target-nums[i])!=s.end()){
                v.push_back(i);
                v.push_back(s[target-nums[i]]);
            }
            s[nums[i]]=i;
        }
        return v;
    }
};