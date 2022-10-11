class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans =0, maxtemp = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j = i+1;
            int z = nums.size()-1;
            while(j<z){
                int sum = nums[i]+nums[j]+nums[z];
                if(sum==target)return sum;
                int temp = abs(sum-target);
                if(temp<maxtemp){
                    maxtemp=temp;
                    ans = sum;
                }
                 if(sum>target){
                    z--;
                }
                else{
                    j++;
                }
            }
            
        }
        return ans;
    }
};