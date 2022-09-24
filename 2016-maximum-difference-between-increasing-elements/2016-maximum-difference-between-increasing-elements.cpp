class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = 0,sum =nums[0];
        for(int i =1;i<nums.size();i++){
            res = max(res,nums[i]-sum);
            sum = min(nums[i],sum);
        }
        if(res<=0) return -1;
        
        return res;
    }
};