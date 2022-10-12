class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int kkr = INT_MAX, mi = INT_MAX;
        for(auto i:nums){
            if(i<=kkr) kkr=i;
            else if(i<=mi) mi=i;
            else return true;
        }
        return false;
    }
};