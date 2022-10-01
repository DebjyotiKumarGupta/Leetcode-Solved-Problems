class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int curr=0, sum =0;
        for(int i =0;i<nums.size();i++){
            sum+= nums[i];
            curr = min(curr,sum);
        }
        
        return -curr+1;
    }
};