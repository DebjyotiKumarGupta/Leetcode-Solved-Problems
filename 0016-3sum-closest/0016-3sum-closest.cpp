class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0;
        int maxw = INT_MAX;
        int ans =0;
          // vector<vector<int>> v;
        // set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int z = nums.size()-1;
            while(j<z){
                 sum = nums[i]+nums[j]+nums[z];
                int w = abs(sum-target);
                if(sum==target) return sum;
                if(w<maxw){
                    maxw=w;
                    ans = sum;
                }
                else if(sum>target){
                    z--;
                }
                else{
                    j++;
                }
            }
        }
        // sum = nums[0]+nums[1]+nums[2]
        return ans;
    }
};