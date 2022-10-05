class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> s;
        int sum =0;
        for(int i=0;i<nums.size()-1;i++){
            sum=nums[i]+nums[i+1];
            if(s.find(sum)!=s.end()){
                return true;
            }
            s.insert(sum);
        }
        return false;
    }
};