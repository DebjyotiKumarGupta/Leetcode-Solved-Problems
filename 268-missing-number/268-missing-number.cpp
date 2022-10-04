class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size()+1;
       int sum =0,z;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
       return n*(n-1)/2-sum;
        
    }
};