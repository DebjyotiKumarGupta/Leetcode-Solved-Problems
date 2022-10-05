class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        if(nums.size()==2){
            return false;
        }
     for(int i=1;i<nums.size();i++){
         int sum = nums[i]+nums[i-1];
         for(int j=i;j<nums.size()-1;j=j++){
            // int x = sum-nums[i];
             if(nums[j]+nums[j+1]==sum){
                 return true;
             }
             j++;
         }
     }   
        return false;
    }
};