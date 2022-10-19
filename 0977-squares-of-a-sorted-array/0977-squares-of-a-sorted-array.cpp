class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int sum =0;
        for(int i=0;i<nums.size();i++){
            sum = nums[i];
            nums[i]= sum*sum;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};